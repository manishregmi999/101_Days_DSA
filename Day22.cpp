//Circular Linked list #1
#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node(int val)
    {
        data=val;
        next = NULL;
    }
};

class circularlist
{
Node* head;
Node* tail;
public:
circularlist()
    {
    head=tail=NULL;  
    }
    void insertathead(int val)
    {
        Node* newNode = new Node(val);
        if(head==NULL)
        {
            head=tail=newNode;
            tail->next = head;
        }
        else
        {
            newNode->next = head;
            tail->next = newNode;
            head=newNode;
        }
    }

    //inserattail() function
    void insertattail(int val)
    {
        Node* newNode = new Node(val);
        if(head==NULL){
            tail=head=newNode;
            tail->next = head;
            return;
        }
        else
        {
            newNode->next = head;// correct
            tail->next=newNode;//c
            tail=newNode;
        }
    }
   //Function to print circular singly linked list
    void print()
    {
        if(head==NULL){
            cout<<"Empty List\n";
            return;
        }
        Node* temp=head->next;
        cout<<head->data<<"->";
        while(temp != head)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<endl;
       
    }

    //delathead() function
    void delathead()
    {
        if(head == NULL)
        {
        cout<<"Empty List";
        return;
        }
         Node* temp = head;

        if(head == tail)
        {
           head=tail=NULL;
           
        }
        else
        {
        tail->next = head->next;
        temp = head;
        head=head->next;
        }
   delete temp;

    }
};
int main()
{
ll.insertathead(5);
circularlist ll;
ll.insertathead(3);
ll.insertathead(2);
ll.insertathead(1);
ll.print();
ll.insertathead(4);
ll.insertattail(7);
ll.delathead();
ll.print();
ll.delathead();
ll.print();
ll.delathead();
ll.print();
ll.delathead();
ll.print();
ll.delathead();
ll.print();
ll.delathead();
ll.print();

}