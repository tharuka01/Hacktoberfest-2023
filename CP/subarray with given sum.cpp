#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define tej() ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
void solve(int a[], int n, int target)
{

    for (int i = 0; i < n; i++) {
        int sum = a[i];

        if (sum == target) {
            cout<< i << endl;
            return;
        }
        else {
            for (int j = i + 1; j < n; j++) {
                sum += a[j];

                if (sum == target) {
                    cout<<i<<j << endl;
                    return;
                }
            }
        }
    }
    cout << "Not Found";
    return;
}

int main()
{

    tej();
    int n;
    cin>>n;
    int target;
    cin>>target;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    solve(a,n,target);
    return 0;
}
