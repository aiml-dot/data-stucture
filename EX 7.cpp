
#include <iostream>
#include <string>
using namespace std;

#define MAX 5

struct customer
{
    int id;
    string name;
    int priority;
};

class circularQueue
{
private:
    customer Queue[MAX];
    int front, rear;

public:
    circularQueue()
    {
        front = -1;
        rear = -1;
    }

    int isEmpty()
    {
        return front == -1;
    }

    int isFull()
    {
        return (rear + 1) % MAX == front;
    }

    void enqueue(customer c)
    {
        if (isFull())
        {
            cout << "Queue is full!\n";
            return;
        }

        if (isEmpty())
            front = 0;

        rear = (rear + 1) % MAX;
        Queue[rear] = c;

        cout << "Customer added: " << c.name << "\n";
    }

    customer dequeue()
    {
        customer c{ -1, "", 0 };

        if (isEmpty())
        {
            cout << "Queue is empty!\n";
            return c;
        }

        c = Queue[front];

        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % MAX;
        }

        cout << "Customer removed: " << c.name << "\n";
        return c;
    }
};

int main()
{
    circularQueue q;

    customer c1 = {1, "Rahul", 1};
    customer c2 = {2, "Priya", 2};

    q.enqueue(c1);
    q.enqueue(c2);

    q.dequeue();

    return 0;
}
