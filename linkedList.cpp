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
    
    Node* head = NULL;
    Node* temp = head;
    while(true){
        int x;
        cin >> x;
        Node* newNode = new Node(x);

        if(x == -1){
            break;
        }

        if(head == NULL){
            head = newNode;
            temp = head;
        }
        else{
            temp->next = newNode;
            temp = temp->next;
        }
    }


    

    //5 -> 1 -> 2 -> 3 ->NULL
    //cout << head->data << " -> " << head->next->data << " -> " << head->next->next->data  << " -> " << head->next->next->next->data; 
    temp = head;
    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "X";

}

