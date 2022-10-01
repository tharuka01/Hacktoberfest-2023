#include<bits/stdc++.h>
using namespace std;

class CircularQueue{
    int *arr;
    int front;
    int rear;
    int size;

    CircularQueue(){
        int size = 100000;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void enqueue(int data){
        if((front == 0 && rear == size-1) || (rear = (front-1)%(size-1))){
            cout<<"Queue is Full : "<<endl;
        }
        //first element to push
        else if(front == -1){
            front = 0;
            rear = 0;
            arr[rear] = data;
        }
        else if(rear = size-1 && front != 0){
            rear = 0;
            arr[rear] = data;
        }
        else{
            rear++;
            arr[rear] = data;
        }
    }

    int dequeue(){
        //To check whether queue is empty or not
        if(front == -1){
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        //Single element is persent
        if(front == rear){
            front = -1;
            rear = -1;
        }
        else if(front == size-1){
            front = 0; //To maintain cyclic nature
        }
        else{
            front++;
        }
        return ans;
    }
};
int main(){

}