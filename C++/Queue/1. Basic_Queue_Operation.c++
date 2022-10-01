#include<bits/stdc++.h>
using namespace std;

int main(){
    //create aa queue
    queue<int> q;

    //operation
    q.push(10);

    cout<<"Front of Queue is : "<<q.front()<<endl;
    
    q.push(2);

    cout<<"Front of Queue is : "<<q.front()<<endl;

    q.push(4);

    cout<<"Front of Queue is : "<<q.front()<<endl;
    
    cout<<"Size of Queue is : "<<q.size()<<endl;

    q.pop();

    cout<<"Size of Queue is : "<<q.size()<<endl;

    if(q.empty()){
        cout<<"Queue is Empty "<<endl;
    }
    else{
        cout<<"Queue is Not Empty "<<endl;
    }
    return 0;
}