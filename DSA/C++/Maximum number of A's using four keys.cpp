/* C++ program to print the maximum number of A’s using the given keys */

#include<iostream>

using namespace std;

int main()

{

 int n;

 cin>>n;

 long int dp[n];

 for(int i=1;i<=6;i++)

 {

 dp[i-1]=i;

 }

 for(int i=7;i<=n;i++)

 {

 dp[n-1]=0;

 for(int b=i-3;b>=1;b--)

 {

 int temp=(i-b-1)*dp[b-1];

 if(temp > dp[i-1])

 dp[i-1]=temp;

 }

 }

 cout<<dp[n-1];

}
