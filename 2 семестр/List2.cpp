#include<iostream>
using namespace std;

struct Node {
    char data;
    Node* pointer_to_prev_node = nullptr;
    Node* pointer_to_next_node = nullptr;
};

struct List {
    Node* head_node = nullptr;
    Node* tail_node = nullptr;
};

void print_list(List& list)
{
    for (Node* p = list.head_node; p; p = p->pointer_to_next_node)
        cout << p->data << " ";
    cout << endl;
}

void insert(List& list, const char& data, const int& index = 0) {
    Node* new_node = new Node;
    new_node->data = data;

    if (list.head_node == nullptr) {
        new_node->pointer_to_prev_node = nullptr;
        new_node->pointer_to_next_node = nullptr;
        list.head_node = new_node;
        list.tail_node = new_node;
        return;
    }

    int counter = 1;
    Node* current_node = list.head_node;
    while (counter != index) {
        current_node = current_node->pointer_to_next_node;
        counter++;
    }

    if (current_node->pointer_to_next_node != nullptr) { 
        new_node->pointer_to_next_node = current_node->pointer_to_next_node;
        current_node->pointer_to_next_node->pointer_to_prev_node = new_node;
    }

    current_node->pointer_to_next_node = new_node;
    new_node->pointer_to_prev_node = current_node;

}

void pushBack(List& list, const char& data) {
    Node* new_node = new Node;
    new_node->data = data;

    if (list.head_node == nullptr) {
        new_node->pointer_to_prev_node = nullptr;
        new_node->pointer_to_next_node = nullptr;
        list.head_node = new_node;
        list.tail_node = new_node;
    }
    else {
        list.tail_node->pointer_to_next_node = new_node;
        new_node->pointer_to_next_node = nullptr;
        new_node->pointer_to_prev_node = list.tail_node;
        list.tail_node = new_node;
    }
}

int main()
{
    setlocale(LC_ALL, "ru");
    List list1;

    int n1;
    cout << "Введите размер списка: ";
    cin >> n1;

    for (int i = 0; i < n1; i++)
    {
        char L1;
        cout << "   Введите " << i + 1 << " элемент: ";
        cin >> L1;
        pushBack(list1, L1);
    }
    cout << "Список: =  ";
    print_list(list1);
    cout << endl;
    for (int i = 1; i <= n1; i+=2)
    {
        char h;
        cout << "   Введите значение для вставки после "<< i<< " элемента ";
        cin >> h;
        insert(list1, h, i);
        n1++;
        cout << "Список: =  ";
        print_list(list1);
        cout << endl;
    }
    
	return 0;
}