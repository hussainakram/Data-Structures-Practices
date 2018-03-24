#include <iostream>
using namespace std;
#define MAX_SIZE 101
class MyStack{
private:
    int A[MAX_SIZE];
    int top;
public:
    MyStack()
    {
        top = -1;
    }
    void Push(int num)
    {
        if (top == MAX_SIZE -1)
        {
            cout << "Sorry! Stack Overflow!" << endl;
            return;
        }
        A[++top] = num;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Sorry! Stack is empty!" << endl;
            return;
        }
        A[top] = 9999999;
        top--;
    }
    int Top()
    {
        return top;
    }
    bool isEmpty()
    {
        if (top == -1)
            return true;
        return false;
    }
    bool isFull()
    {
        if (top == MAX_SIZE)
            return true;
        return false;
    }
    void Print()
    {
        if (top == -1 || top == MAX_SIZE)
        {
            cout << "Sorry! can't print this stack!" << endl;
            return;
        }
        cout << "Your stack elements are: ";
        for (int i =0; i <= top; i++) {
            cout << A[i] << " ";
        }
        cout << "\n";
    }
};
int main()
{
    MyStack S;
    S.Push(2);
    S.Push(9);
    S.Push(1);
    S.pop();
    S.Print();
    S.isEmpty();
}
