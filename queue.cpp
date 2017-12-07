#include "queue.hpp"

Queue::Node* createNode(const Queue::value_type& data, Queue::Node* next)
{
    Queue::Node* node = new Queue::Node();
    node->Data = data;
    node->Next = next;
    return node;
}

Queue* initQueue()
{
    Queue* queue = new Queue();
    queue->Begin = nullptr;
    queue->End = nullptr;
    return queue;
}

void destroy(Queue** queue)
{
    Queue* queuecopy = *queue;
    Queue::Node* begin = queuecopy->Begin;
    while (begin)
    {
        Queue::Node* current = begin->Next;
        delete begin;
        begin = current;
    }
    delete queuecopy;
    *queue = nullptr;
}

Queue::Node* push(Queue* const queue, const Queue::value_type& data)
{
    Queue::Node* node = createNode(data, nullptr);
    Queue::Node* last = queue->End;
    if (queue->Begin == nullptr)
    {
        queue->Begin = node;
    }
    else
    {
        last->Next = node;
    }
    queue->End = node;
    return node;
}

void pop(Queue* const queue)
{
    Queue::Node* node = queue->Begin;
    queue->Begin = queue->Begin->Next;
    node->Next = nullptr;
}

Queue::Node* front(Queue* const queue)
{
    return queue->Begin;
}

Queue::Node* back(Queue* const queue)
{
    return queue->End;
}

void print(const Queue* const list)
{
    Queue::Node* current = list->Begin;
    while (current)
    {
        std::cout << current->Data << std::endl;
        current = current->Next;
    }
}
