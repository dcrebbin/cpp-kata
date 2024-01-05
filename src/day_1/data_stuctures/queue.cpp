#include <iostream>
#include <algorithm>

using namespace std;

struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;

    void create(struct Queue *q, int size)
    {
        q->size = size;
        q->front = q->rear = -1;
        q->Q = new int[q->size];
    }

    void enqueue(struct Queue *q, int x)
    {
        if (q->rear == q->size - 1)
        {
            cout << "Queue is full" << endl;
        }
        else
        {
            q->rear++;
            q->Q[q->rear] = x;
        }
    }

    int dequeue(struct Queue *q)
    {
        int x = -1;
        if (q->front == q->rear)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            q->front++;
            x = q->Q[q->front];
        }
        return x;
    }

    void display(struct Queue q)
    {
        for (int i = q.front + 1; i <= q.rear; i++)
        {
            cout << q.Q[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue q;
    q.create(&q, 5);

    q.create(&q, 5);
    q.enqueue(&q, 10);
    q.enqueue(&q, 20);
    q.enqueue(&q, 30);

    q.display(q);

    cout << q.dequeue(&q) << endl;
    cout << q.dequeue(&q) << endl;
    cout << q.dequeue(&q) << endl;

    q.display(q);

    return 0;
}