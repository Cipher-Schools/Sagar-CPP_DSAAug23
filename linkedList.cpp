#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

int main(){
    Node* head = new Node(5);
    cout << head->data << "\n";
    Node* one = new Node(1);
    Node* two = new Node(2);
    Node* three = new Node(4);
    head->next = one;
    one->next = two;
    one->next->next = three;

    //5 -> 1 -> 2 -> 3 ->NULL
    cout << head->data << " -> " << head->next->data << " -> " << head->next->next->data  << " -> " << head->next->next->next->data; 
}

