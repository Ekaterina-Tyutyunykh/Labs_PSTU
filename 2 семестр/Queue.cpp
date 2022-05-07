#include<iostream>
using namespace std;


struct Node {
    char data;
    Node* pointer_to_next_node = nullptr;
};

struct Queue {
    int size = 0;
    Node* head_node = nullptr;
    Node* tail_node = nullptr;
};

void push(Queue& queue, const char& value) {
    Node* new_node = new Node;
    new_node->data = value;
    queue.size++;
    if (queue.head_node != nullptr) {
        new_node->pointer_to_next_node = nullptr;
        queue.tail_node->pointer_to_next_node = new_node;
        queue.tail_node = new_node;
    }
    else {
        queue.head_node = new_node;
        queue.tail_node = new_node;
    }
}

void full(Queue& queue, const char& size) {
    char value;
    for (int i = 1; i <= size; i++) {
        cout << "   Введите значение "<<i <<" элемента: ";
        cin >> value;
        push(queue, value);
    }
}

void print(Queue& queue) {
    Node* p = queue.head_node;
    while (p != nullptr) {
        cout << p->data << " ";
        p = p->pointer_to_next_node;
    }
    cout << endl;
}

void pop(Queue& queue) {
    Node* p = queue.head_node;
    queue.head_node = queue.head_node->pointer_to_next_node;
    queue.size--;
    delete p;
}

void insert(Queue& queue,  const char& index) {
    int i = 1;
    while (i < index) {
        push(queue, queue.head_node->data);
        pop(queue);
        i++;
    }
    char value;
    cout << "   Введите значение для вставки  " << i << " элементом ";
    cin >> value;
    push(queue, value);
    for (i; i < queue.size; i++) {
        push(queue, queue.head_node->data);
        pop(queue);
    }

}

int main()
{
    setlocale(LC_ALL, "ru");
    Queue q1;
    int n1;
    cout << "Введите размер очереди: ";
    cin >> n1;
    full(q1, n1);
    cout << "Очередь: =  ";
    print(q1);
    for (int i = 1; i <= n1; i += 2)
    {
        insert(q1, i);
        n1++;
        cout << "Очередь: =  ";
        print(q1);
        cout << endl;
    }

    print(q1);
	return 0;
}