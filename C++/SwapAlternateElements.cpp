//swapping alternate elements of an array

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    int a[n],i,temp;
    cout<<"Enter elements:"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i=i+2){
        if(i+1<n){
            swap(a[i],a[i+1]);
        }
    }
    cout<<"Swapped"<<endl;
    for(i=0;i<n;i++){
        cout<<" "<<a[i];
    }
}