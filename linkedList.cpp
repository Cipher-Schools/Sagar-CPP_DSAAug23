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

void print(Node * head){
    while(head != NULL){
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "X";
}
// 2 4 5 1 7 3 8 9 1 2 3 
// 3 -> 12
// 2 4 12 5 1 7 3 8 9 1 2 3 

/* Node* insertAtPosition(Node* head, int pos, int value){

}
*/
Node* getMidNodeUsingFastSlow(Node* head){
    Node* slow = head;
    Node* fast = head;
    // 1 2
    while(fast != NULL && fast->next != NULL){  // error which is run time and which will not occour
        fast = fast->next->next;    // null            // evertime
        slow = slow->next; // 2
    }

    return slow;
}
Node* getMidNode(Node* head){
      int count = 0;
      Node* temp = head;
      while(temp != NULL){
        count++;
        temp = temp->next;
      }
      count = count / 2;
      temp = head;
      // 1 2 3
    while(count--){
        temp = temp->next;
    }

    return temp;
}

// cout << &temp > 2000
// cout << temp; > null;
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
        // 2 -> 5 -> 10
        // h          |

        if(head == NULL){
            head = newNode; 
            temp = head;  
        }
        else{
            temp->next = newNode;
            temp = temp->next;
        }
    }
    print(head);
    cout << "\n";
    cout << getMidNode(head)->data;
    cout << "\n";

    //5 -> 1 -> 2 -> 3 ->NULL
    //cout << head->data << " -> " << head->next->data << " -> " << head->next->next->data  << " -> " << head->next->next->next->data; 
    cout << getMidNodeUsingFastSlow(head)->data;

}

