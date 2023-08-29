#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
    }
};

//  9 -> 5 -> 4


class stack
{
private:
    int size;
    Node* head;
public:
    stack(){
        size = 0;
        head = NULL;
    }

    void push(int x){
        if(head == NULL){
            head = new Node(x);
        }
        else{
            Node* nn = new Node(x);
            nn->next = head;
            head = nn;
        }
        size++;
    }


    void pop(){
        
    }
    
};

int main(){

}
