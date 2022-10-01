#include<bits/stdc++.h>
using namespace std;


int main(){
    deque<int> d;

    d.push_front(18);
    d.push_back(14);

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    d.pop_front();

    // cout<<d.pop_front()<<endl;
    // cout<<d.pop_back()<<endl;
    d.pop_back();

    if(d.empty()){
        cout<<"Queue is Empty : "<<endl;
    }
    else{
        cout<<"Queue is not empty : "<<endl;
    }

    return 0;
}