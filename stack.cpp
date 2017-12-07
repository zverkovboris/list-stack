#include "stack.hpp"

Stack::Node* createNode(const Stack::value_type& data, Stack::Node* next)
{
    Stack::Node* node = new Stack::Node();
    node->Data = data;
    node->Next = next;
    return node;
}

Stack* initStack()
{
    Stack* stack = new Stack();
    stack->Top = nullptr;
    stack->Down = nullptr;
    return stack;
}

void destroy(Stack** stack)
{
    Stack* stackcopy = *stack;
    Stack::Node* last = stackcopy->Top;
    while (last)
    {
        Stack::Node* current = last->Next;
        delete last;
        last = current;
    }
    delete stackcopy;
    *stack = nullptr;
}

Stack::Node* push(Stack* const stack, const Stack::value_type& data)
{
    Stack::Node* node = createNode(data, stack->Top);
    if (stack->Down == nullptr)
    {
        stack->Down = node;
    }
    stack->Top = node;
    return node;
}

void pop(Stack* const queue)
{
    Stack::Node* node = queue->Top;
    queue->Top = queue->Top->Next;
    node->Next = nullptr;
}

Stack::Node* top(Stack* const stack)
{
    return stack->Top;
}

void print(const Stack* const list)
{
    Stack::Node* current = list->Top;
    while (current)
    {
        std::cout << current->Data << std::endl;
        current = current->Next;
    }
}
