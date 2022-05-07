#include <iostream>
using namespace std;

struct Node {
    int data;
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

void pop_front(List& list)
{
    if (list.head_node == nullptr) return;
    Node* temp = list.head_node;
    list.head_node = list.head_node->pointer_to_next_node;
    if (temp == list.tail_node) list.tail_node = nullptr;
    delete temp;
}

void del(List& list) {
   
    Node* current = list.head_node;
    Node* prev = nullptr;
    
    while (current != nullptr)
    {
      
        if (list.head_node->data % 2 == 0) {
            pop_front(list);
            current = list.head_node;
            prev = nullptr;
        }
        else if (current->data % 2 == 0) 
        {
            prev->pointer_to_next_node = current->pointer_to_next_node;
            delete current; 
            current = prev->pointer_to_next_node; 
        }
        else 
        {
            prev = current; 
            current = current->pointer_to_next_node; 
        }
    }
}

void pushBack(List& list, const int& data) {
    Node* new_node = new Node;
    new_node->data = data;

    if (list.head_node == nullptr) {
        list.head_node = new_node;
        list.tail_node = new_node;
    }
    else {
        list.tail_node->pointer_to_next_node = new_node;
        list.tail_node = new_node;
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    List list1;

    int n1;
    cout << "Введите размер списка: ";
    cin >> n1;

    for (int i = 0; i < n1; i++)
    {
        int L1;
        cout << "   Введите " << i + 1 << " элемент: ";
        cin >> L1;
        pushBack(list1, L1);
    }
    print_list(list1);
    del(list1);
    print_list(list1);
    return 0; 
}