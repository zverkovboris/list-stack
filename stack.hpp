#include <iostream>

struct Stack
{
    using value_type = int;

    struct Node
    {
        value_type Data;
        Node* Next;
    };

    Node* Top;
    Node* Down;
};

Stack::Node* createNode(const Stack::value_type& data, Stack::Node* next);
Stack* initStack();
void destroy(Stack** stack);
Stack::Node* push(Stack* const stack, const Stack::value_type& data);
void pop(Stack* const queue);
Stack::Node* top(Stack* const stack);
void print(const Stack* const list);
