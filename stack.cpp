#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

//  9 -> 5 -> 4

class stack
{
private:
    int size;
    Node *head;

public:
    stack()
    {
        size = 0;
        head = NULL;
    }

    void push(int x)
    {
        if (head == NULL)
        {
            head = new Node(x);
        }
        else
        {
            Node *nn = new Node(x);
            nn->next = head;
            head = nn;
        }
        size++;
    }

    void pop()
    {
        if (head != NULL)
        {
            size--;
            head = head->next;
            return;
        }

        cout << "Stack is Empty \n";
    }

    int top(){
        if(head == NULL)
        {
            cout << "Stack is Empty \n";
            return -1;
        }

        return head->data;
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << "  -> ";
            temp = temp->next;
        }
        cout << "NULL";
    }

    bool isEmpty(){
        return head == NULL;
    }
};

int main()
{
    stack* st = new stack();
    st->push(4);
    st->push(7);
    st->push(1);
    st->push(3);
    
    while(!st->isEmpty()){
        cout << st->top() << " ";
        st->pop();
    }
    
}
