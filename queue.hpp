#include <iostream>

struct Queue
{
    using value_type = int;

    struct Node
    {
        value_type Data;
        Node* Next;
    };

    Node* Begin;
    Node* End;
};

Queue::Node* createNode(const Queue::value_type& data, Queue::Node* next);
Queue* initQueue();
void destroy(Queue** queue);
Queue::Node* push(Queue* const queue, const Queue::value_type& data);
void pop(Queue* const queue);
Queue::Node* front(Queue* const queue);
Queue::Node* back(Queue* const queue);
void print(const Queue* const list);
