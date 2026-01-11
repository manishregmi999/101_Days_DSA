
//Linked List #3
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){// When we create a node (the object of class Node)
        data = val;//data stores in that node
        next = NULL;//that node points to NULL address      
    }
};

class List{
    Node* head; //head is a pointer that stores address of object of Node(class). It will store adress of 1st node of the linkedlist. 
    Node* tail; //tail is a pointer that stores address of last node of linked list.
    public:
        List(){
            head = tail =NULL;//When we make a new linked list(object of List class) the address of 1st node and address of last node is written as NULL.
        }
        
        //Push_front() function : This will add a node at the front of linked list with the value given.
        void push_front(int val){
            //Create a new node
        Node* newNode=new Node(val); // "A node will be cretead through dynamic memory allocation. We have not assigned name for that node but we havce adress of this node which is stored in a pointer, that pointer's name is newNode"
        //Check if linked list is empty
        if(head==NULL)
        {
            head = tail = newNode; // head is also pointer, tail is also pointer and newNode is also pointer. so we are asiigning value of one to another. * head means value stored in the adress pointed by head pointer.
        } else
        {
         //If ll(linked list) is not empty
        //The new node should point to previous node, i.e the address currently stored in head(prev node's address)
            newNode->next = head;
            //The newly created node should be at first i.e head should point to the new node's address
            head = newNode; // head now points to the same Node as newNode 

        }
}
//Print Linked List
void print()
{
    Node* temp=head;    // This means temp is a pointer that stores address of node (object of class node) and temp is initialized with the same address of node as it is in head so temp has the adress of 1st node.

    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;  //Here temp = adress of A node. A node has adress of B node, to get that adress we have to do temp->next. So temp->next means (*temp).next which means we have temp pointer which contains address of A node. So *temp.next means go to the adress of node which is in temp and select the next. Next node address. So temp = temp->next means temp will now have the address of next node which is stored in the current node whose adress is in temp.
    }
    cout<<"NULL";
    cout<<endl;
}

//Push Back 
void push_back(int val)
{
    Node* NewNode = new Node(val);
    if(head==NULL){
        head=tail=NewNode;
    }
    else
    {
        (*tail).next = NewNode; //Same as tail->next = NewNode
        tail = NewNode;
    }
}

//Pop_front()
void pop_front()
{
    if(head==NULL)
    {
        cout<<"Linked list is empty";
        return;
    }
    else
    {
    Node* temp=head;
    head=temp->next;
    temp->next=NULL;
    delete temp;
    }
}

//pop_back()
void pop_back()
{
    if(head==NULL)
    {
    cout<<"Linked list is empty"; 
    return;       
    }
    //For single node
     if(head == tail)
    {
        delete head;
        head = tail = NULL;
        return;
    }

    Node* temp = head;
    while(temp->next != tail)
    {
        temp=temp->next;
    }
       delete tail; //This will delete the node completely from memory, not just from linked list. It doesnot delete tail variable.
       tail=temp;
       tail->next = NULL;
}

//Insert node 
void insert (int val, int pos){
    if(pos==0)
    {
        push_front(val);
        return;
    }
    else if(pos<0)
    {
        cout<<"Invalid Index"<<endl;
        return;
    }
    else
    {
        Node* temp=head;
      for(int i=0; (i<pos-1); i++)
      {
        if(temp==NULL){
            cout<<"Invalid Position\n";
            return;
        }
        else
        {
            temp=temp->next;
        }
      }
      Node* NewNode = new Node(val);
      NewNode->next = temp->next;
      temp->next=NewNode;
    }
}
};
int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3); 
    ll.print();
    ll.insert(4, -1);
    ll.print();
    return 0;
}