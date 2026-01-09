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
};


int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3); //  3-->2-->1
    return 0;
}