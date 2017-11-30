## Лабораторная работа 10

### Задание 1
Реализуйте структуру `ForwardList` и функции для работы с односвязным списком. Элементы списка - целочисленные значения. Заголовочный файл назовите `forward_list.hpp`, а файл с определениями функций `forward_list.cpp`.

Функции для работы с  односвязным списком:

```cpp
ForwardList* initForwardList(); // инициализация списка

void destroy(ForwardList**); // очистка памяти 

ForwardList::Node* pushFront(ForwardList* const, const ForwardList::value_type&);

ForwardList::Node* popFront(ForwardList* const);

ForwardList::Node* insertAfter(ForwardList* const, ForwardList::Node* const, const ForwardList::value_type&);

ForwardList::Node* eraseAfter(ForwardList* const, ForwardList::Node* const);

ForwardList::Node* reverse(ForwardList* const); // функция разворачивает список

size_t size(const ForwardList* const);

void print(const ForwardList* const);
```


### Задание 2
На основе односвязного списка реализуйте структуру `Queue` и функции для работы с очередью. Элементы ояереди - строки. Заголовочный файл назовите `queue.hpp`, а файл с определениями функций `queue.cpp`.

Функции для работы с  односвязным списком:

```cpp
Queue* initQueue(); // инициализация списка

void destroy(Queue**); // очистка памяти 

Queue::Node* push(Queue* const, const Queue::value_type&);

void pop(Queue* const); // убирает элемент из очереди

Queue::Node* front(Queue* const);

Queue::Node* back(Queue* const);
```


### Задание 3
На основе односвязного списка реализуйте структуру `Stack` и функции для работы со стеком. Элементы стека - строки. Заголовочный файл назовите `stack.hpp`, а файл с определениями функций `stack.cpp`.

Функции для работы с  односвязным списком:

```cpp
Stack* initStack(); // инициализация списка

void destroy(Stack**); // очистка памяти 

Stack::Node* push(Stack* const, const Stack::value_type& );

void pop(Stack* const); // убиарет элемент

Stack::Node* top(Stack* const);
```