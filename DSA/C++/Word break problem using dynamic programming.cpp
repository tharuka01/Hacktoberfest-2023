/* C++ program for the word break problem using dynamic programming */

#include<bits/stdc++.h>
using namespace std;
vector<string> dictionary;
bool ContainsWord(string temp)
{
   if(find(dictionary.begin(), dictionary.end(), temp) != dictionary.end())
           return true;
   else
       return false;
}
int main()
{
   int n;
   cin>>n;
   string temp;
   for(int i=0;i<n;i++)
   {
       cin>>temp;
       dictionary.push_back(temp);
   }
   string source;
   cin>>source;
   int size=source.length();
   bool isValid[size+1];
   isValid[0]=false;
   for(int i=1;i<size+1;i++)
       isValid[i]=false;
   for(int i=1;i<size+1;i++)
   {
       if(isValid[i] == false && ContainsWord(source.substr(0,i)))
           isValid[i] = true;
       if(isValid[i])
       {
           if(i == size)
               break;
           for(int j=i+1;j<size+1;j++)
           {
               if(isValid[j] == false and ContainsWord(source.substr(i,(j-i))))
                   isValid[j]=true;
               if(j == size && isValid[j] == true)
                   break;
           }
       }
   }
   if(isValid[size])
       cout<<“True”;
   else
       cout<<“False”;
}
