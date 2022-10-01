#include<bits/stdc++.h>
using namespace std;

class Queue {
    public:
        int *arr;
        int front;
        int rear;
        int size;
    public:
    Queue(){
        int size = 100000;
        arr = new int[size];
        front = 0 ,rear = 0;
    }
    void enqueue(int data){
        if(rear == size){
            cout<<"Queue is Full : "<<endl;
        }
        arr[rear] = data;
        rear++;
    }  
    int dequeue(){
        if(front == rear ){
            cout<<"Queue is Empty : "<<endl;
        }
        int ans = arr[front];
        arr[front] = -1;
        front++;
        if(front == rear){
            front  = 0;
            rear = 0;
        }
        return ans;
    }
    bool isEmpty(){
        if(front == rear){
            return 1;
        }
        return 0;
    }
    int front(){
        if(front == rear){
            return -1;
        }
        return arr[front];
    }
    // int size(){
    //     return 
    // }

};

int main(){
    return 0;
}