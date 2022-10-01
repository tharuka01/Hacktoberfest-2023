#include <bits/stdc++.h>
using namespace std;
class Deque
{
    int *arr;
    int size;
    int front;
    int rear;
    Deque(int n)
    {
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool pushFront(int x)
    {
        // Check Queue is empty or not
        if ((front == 0 && rear == size - 1) || (rear = (front - 1) % (size - 1)))
        {
            return false;
        }
        // single element to push
        else if (front == -1)
        {
            front = rear = 0;
        }
        // Cyclic nature
        else if (front == 0 && rear != size - 1)
        {
            front = size - 1;
        }
        // Normal flow
        else
        {
            front--;
        }
        arr[front] = x;
        return true;
    }
    bool pushBack(int x)
    {
        // Check Queue is empty or not
        if ((front == 0 && rear == size - 1) || (rear = (front - 1) % (size - 1)))
        {
            return false;
        }
        // single element to push
        else if (front == -1)
        {
            front = rear = 0;
        }
        // Cyclic nature
        else if (rear = size - 1 && front != 0)
        {
            rear = 0;
        }
        // Normal flow
        else
        {
            rear++;
        }
        arr[rear] = x;
        return true;
    }
    int popFront()
    {
        // Check Queue is empty or not
        if ((front == 0 && rear == size - 1) || (rear = (front - 1) % (size - 1)))
        {
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        // single element to push
        if (front == rear)
        {
            front = rear = -1;
        }
        // Cyclic nature
        else if (front = size - 1)
        {
            front = 0;
        }
        // Normal flow
        else
        {
            front++;
        }
        return ans;
    }
    int popBack()
    {
        // Check Queue is empty or not
        if ((front == 0 && rear == size - 1) || (rear = (front - 1) % (size - 1)))
        {
            return -1;
        }
        int ans = arr[rear];
        arr[rear] = -1;
        // single element to push
        if (front == rear)
        {
            front = rear = -1;
        }
        // Cyclic nature
        else if (rear = 0)
        {
            rear = size - 1;
        }
        // Normal flow
        else
        {
            rear--;
        }
        return ans;
    }

    int getFront()
    {
        if (isEmpty())
        {
            return -1;
        }
        return arr[front];
    }
    int getRear()
    {
        if (isEmpty())
        {
            return -1;
        }
        return arr[rear];
    }
    bool isEmpty()
    {
        if (front == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isFull()
    {
        if ((front == 0 && rear == size - 1) || (front != 0 && rear == (front - 1) % (size - 1)))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    return 0;
}