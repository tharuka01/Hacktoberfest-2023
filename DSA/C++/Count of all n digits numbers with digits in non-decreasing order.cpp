/* C++ program to find the count of all n digit numbers with the digits in non-decreasing order */

#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
long long int dp[10][n+1]; 
for(int i=0;i<10;i++)
   for(int j=0;j<n+1;j++)
       dp[i][j]=0;
for(int i=0;i<10;i++)
   dp[i][1]=1;
for(int i=0;i<10;i++)
{
   for(int j=2;j<=n;j++)
   {
       for(int k=0;k<=i;k++)
       {
           dp[i][j]+=dp[k][j-1];
       }
   }
}
long long int count=0;
for(int i=0;i<10;i++)
   count+=dp[i][n];   // Update the count for the n value specified
cout<<count;
return 0;
}
