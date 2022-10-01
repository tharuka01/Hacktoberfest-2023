#include<bits/stdc++.h>
using namespace std;

class QueueUsingStack{
    public:
        int *arr;
        int size;
        int front ;
        int rear;
    QueueUsingStack(int n){
        size = n;
        arr = new int(n);
        front = rear = -1;
    }
    stack<int> input;
    stack<int> output;
    void push(int x){
        input.push(x);
    }
    int pop(){
        if(!output.empty()){
            output.pop();
        }
        else{
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
            output.pop();
        }
    }
    int top(){
        if(!output.empty()){
            output.pop();
        }
        else{
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
            output.top();
        }
    }
};
int main(){
    return 0;
}