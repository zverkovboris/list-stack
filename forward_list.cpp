#include <iostream>

struct ForwardList
{
    using value_type = int;

    struct Node
    {
        value_type Data;
        Node* Next;
    };

    Node* Head;
    Node* Tail;
};

ForwardList::Node* createNode(const ForwardList::value_type& data, ForwardList::Node* next)
{
    ForwardList::Node* node = new ForwardList::Node();
    node->Data = data;
    node->Next = next;
    return node;
}

ForwardList* initList()
{
    ForwardList* list = new ForwardList();
    list->Head = nullptr;
    list->Tail = nullptr;
    return list;
}
void destroy(ForwardList** list)
{

    ForwardList* listcopy = *list;
    ForwardList::Node* head = listcopy->Head;
    while (head)
    {
        ForwardList::Node* current = head->Next;
        delete head;
        head = current;
    }
    delete listcopy;

    *list = nullptr;
}
ForwardList::Node* pushFront(ForwardList* const list, const ForwardList::value_type& data)
{
    ForwardList::Node* node = createNode(data, list->Head);
    if (list->Tail == nullptr)
        {
            list->Tail = node;
        }
    list->Head = node;
    return node;
}

ForwardList::Node* popFront(ForwardList* const list)
{
    ForwardList::Node* first = list->Head;
    ForwardList::Node* second = list->Head->Next;
    list->Head = second;
    return first;
}
ForwardList::Node* insertAfter(ForwardList* const list, ForwardList::Node* const where , const ForwardList::value_type& data)
{
    ForwardList::Node* node = createNode(data, where->Next);
    where->Next = node;
    if (node->Next == nullptr)
        list->Tail = node;
    return node;
}
ForwardList::Node* eraseAfter(ForwardList* const list, ForwardList::Node* const where)
{
    ForwardList::Node* nextdel = where->Next;
    where->Next = where->Next->Next;
    if(nextdel == list->Tail)
    {
        list->Tail = where;
    }
    return nextdel;

}
void print(const ForwardList* const list)
{
    ForwardList::Node* current = list->Head;
    while (current)
    {
        std::cout << current->Data << std::endl;
        current = current->Next;
    }
}

ForwardList::Node* reverse(ForwardList* const list)
{
    ForwardList::Node* tmp = list->Head;
    ForwardList::Node* curr;
    while(tmp->Next != nullptr)
    {
        curr = eraseAfter(list,tmp);
        pushFront(list,curr->Data);
    }
    return list->Head;
}





int main()
{

    ForwardList* list =initList();
    pushFront(list,1);
    pushFront(list,2);
    pushFront(list,3);
    pushFront(list,4);
    pushFront(list,5);
    popFront(list);
    insertAfter(list,list->Head->Next,0);
    eraseAfter(list, list->Head->Next->Next);
    print(list);
    std::cout << std::endl;
    reverse(list);
    print(list);
    destroy(&list);
    return 0;
}
