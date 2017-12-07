




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
    std::cout << size(list);
    destroy(&list);
    return 0;
}
