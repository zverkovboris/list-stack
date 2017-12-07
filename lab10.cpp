#include "queue.hpp"
#include "forward_list.hpp"
#include "stack.hpp"

int main()
{
    ForwardList* list =initList();
    pushFront(list, 1);
    pushFront(list, 2);
    pushFront(list, 3);
    pushFront(list, 4);
    pushFront(list, 5);
    popFront(list);
    insertAfter(list, list->Head->Next, 0);
    eraseAfter(list, list->Head->Next->Next);
    print(list);
    std::cout << std::endl;
    reverse(list);
    print(list);
    std::cout << size(list);
    Queue* queue = initQueue();
    push(queue, 0);
    push(queue, 1);
    push(queue, 2);
    push(queue, 3);
    push(queue, 4);
    push(queue, 5);
    push(queue, 6);
    pop(queue);
    print(queue);
    std::cout << front(queue)->Data;
    std::cout << back(queue)->Data;
    destroy(&queue);
    Stack* stack = initStack();
    push(stack, 0);
    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    push(stack, 4);
    push(stack, 5);
    push(stack, 6);
    pop(stack);
    pop(stack);
    print(stack);
    std::cout << top(stack)->Data;
    destroy(&stack);
    return 0;
}
