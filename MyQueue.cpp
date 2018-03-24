#include<iostream>
#include<stdlib.h>
using namespace std;
#define MAX_SIZE 100
class MyQueue
{
private:
    int A[MAX_SIZE];
    int front;
    int rear;
public:
    MyQueue()
    {
        front = -1;
        rear = -1;
    }
    void Enqueue(int num);
    int Dequeue();
    bool isEmpty();
    void Print();
};

void MyQueue::Enqueue(int num)
{
    if (front == MAX_SIZE) {
        cout << "Queue is Full!" << endl;
        return;
    }
    else if (front == -1)
    {
        A[++front] = num;
        A[++rear] = num;
    }
    else
    {
        A[++rear] = num;
    }
}

int MyQueue::Dequeue()
{
    if (front == -1)
    {
        cout << "Sorry! Queue is either Full or Empty." << endl;
        return 0;
    }
    return rear--;
}

bool MyQueue::isEmpty()
{
    if(front == -1 && rear == -1)
    {
        return true;
    }
    return false;
}

void MyQueue::Print()
{
    if(front == -1 && rear == -1)
    {
        cout << "Sorry! Can't print this Queue." << endl;
        return;
    }
    cout << "Your Queue is: " << endl;
    for(int i=0; i <= rear; i++)
    {
        cout << A[i] << endl;
    }
}

int main()
{
    MyQueue Q;
    Q.Enqueue(2);
    Q.Enqueue(10);
    Q.Enqueue(33);
    Q.Enqueue(9);
    Q.Dequeue();
    Q.Print();
}
