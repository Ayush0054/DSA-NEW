#include <bits/stdc++.h>
using namespace std;
class DEQueue
{
    int *arr;
    int size;
    int front;
    int rear;

public:
    DEQueue(int size)
    {
        size = this->size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    bool isempty()
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

    bool ifull()
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
    bool pushf(int x)
    {
        if (ifull())
        {
            cout << "q is full" << endl;
        }
        if (isempty())
        {
            front = rear = 0;
        }
        else if (front == 0 && rear != size - 1)
        {
            front = size - 1;
        }
        else
        {
            front--;
        }
        arr[front] = x;
        return true;
    }
    bool pushb(int x)
    {
        if (ifull())
        {
            cout << "q is full" << endl;
        }
        if (isempty())
        {
            front = rear = 0;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = x;
        return true;
    }

    int popf()
    {
        if (isempty())
        {
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;

        if (front == rear)
        {
            front = rear = -1;
        }
        else if (front = size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
        return ans;
    }
    int popb()
    {
        if (isempty())
        {
            return -1;
        }

        int ans = arr[rear];
        arr[rear] = -1;

        if (front == rear)
        {
            front = rear = -1;
        }
        else if (rear = 0)
        {
            front = size - 1;
        }
        else
        {
            front++;
        }
        return ans;
    }
    int getf()
    {
        if (isempty())
        {
            return -1;
        }
        return arr[front];
    }
    int getb()
    {
        if (isempty())
        {
            return -1;
        }
        return arr[rear];
    }
};
int main()
{

    return 0;
}