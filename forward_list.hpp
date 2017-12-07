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

ForwardList::Node* createNode(const ForwardList::value_type& data, ForwardList::Node* next);
ForwardList* initList();
void destroy(ForwardList** list);
ForwardList::Node* pushFront(ForwardList* const list, const ForwardList::value_type& data);
ForwardList::Node* popFront(ForwardList* const list);
ForwardList::Node* insertAfter(ForwardList* const list, ForwardList::Node* const where ,
                                const ForwardList::value_type& data);
ForwardList::Node* eraseAfter(ForwardList* const list, ForwardList::Node* const where);
void print(const ForwardList* const list);
ForwardList::Node* reverse(ForwardList* const list);
size_t size(const ForwardList* const list);
