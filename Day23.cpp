// //Circular Linked list #2(Complete)
// #include<iostream>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node* next;
//     Node(int val)
//     {
//         data=val;
//         next = NULL;
//     }
// };

// class circularlist
// {
// Node* head;
// Node* tail;
// public:
// circularlist()
//     {
//     head=tail=NULL;  
//     }
//     void insertathead(int val)
//     {
//         Node* newNode = new Node(val);
//         if(head==NULL)
//         {
//             head=tail=newNode;
//             tail->next = head;
//         }
//         else
//         {
//             newNode->next = head;
//             tail->next = newNode;
//             head=newNode;
//         }
//     }

//     //inserattail() function
//     void insertattail(int val)
//     {
//         Node* newNode = new Node(val);
//         if(head==NULL){
//             tail=head=newNode;
//             tail->next = head;
//             return;
//         }
//         else
//         {
//             newNode->next = head;// correct
//             tail->next=newNode;//c
//             tail=newNode;
//         }
//     }
//    //Function to print circular singly linked list
//     void print()
//     {
//         if(head==NULL){
//             cout<<"Empty List\n";
//             return;
//         }
//         Node* temp=head->next;
//         cout<<head->data<<"->";
//         while(temp != head)
//         {
//         cout<<temp->data<<"->";
//         temp = temp->next;
//         }
//         cout<<endl;
//     }
//     //delathead() function: Solve for 3 conditions, 1st: Empty LL, 2nd: single node in LL, 3rd: 2 or more nodes in LL
//     void delathead()
//     {
//         if(head == NULL)
//         {
//         cout<<"Empty List";
//         return;
//         }
//          Node* temp = head;
//         if(head == tail)
//         {
//            head=tail=NULL;
//         }
//         else
//         {
//         head=head->next;
//         tail->next = head;
//         }
//         delete temp;
//     }
//     //delattail() function
//     void delattail()
//     {
//     if(head==NULL)
//     {
//         cout<<"Empty Linked List";
//         return;
//     }
//     Node* temp = head;
//     if(head == tail)
//     {
//     delete head;
//     head=tail=NULL;
//     }
//     else
//     {
//     while(temp->next != tail)
//     {
//     temp = temp->next;
//     }
//     delete tail;
//     tail = temp;
//     tail->next = head;
    
//     }
// }
// };
// int main()
// {
// circularlist ll;
// ll.insertathead(3);
// ll.insertathead(2);
// ll.insertathead(1);
// ll.print();
// ll.insertathead(4);
// ll.insertattail(7);
// ll.print();
// ll.delattail();
// ll.print();
// }


//Implementation of Stack using Linked List (Linked Stack) #1
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
        next=NULL;
        }
    };
class List
{

Node* head;
public:
//isEmpty() function
int isEmpty(){
    if(head==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
// //isFull() function
// int isFull()
// {

// }

//push() function
void push(int val)
{
Node* newNode;
newNode = new Node(val);
newNode->next= head;
head=newNode;
}
//pop() function
void pop()
{
if(isEmpty() == 1)
{
cout<<"Stack underflow";
return;
}
else
{
Node* temp = head;
head=head->next;
delete temp;
}
}
};

int main(){
    
}