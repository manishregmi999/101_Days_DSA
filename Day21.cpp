//Doubly Linked List #2
#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val)
    {
        data=val;
        next=prev=NULL;
    }
};

class DoublyList
{
    Node* head;
    Node* tail;
public:

//Constructor
DoublyList()
{
   head=tail=NULL; 
}

//Push_front()
void push_front(int val)
{
    Node* NewNode = new Node(val);
    if(head == NULL)
    {
        head=tail=NewNode;
    }
    else
    {
        NewNode->next = head;
        head->prev = NewNode;
        head=NewNode;
    }
}
//Print() function
void print()
{
Node* temp = head;
while(temp != NULL){
    cout<<temp->data<<"<=>";
    temp=temp->next;
}
cout<<"NULL"<<endl;
}

//Push_back() function
void pushback(int val)
{
    Node* NewNode = new Node(val);
    if(head==NULL)
    {
        head = tail = NewNode;
    }
    else
    {
        tail->next = NewNode; // Suruma tail ma vako sabb value use garihalni tespaxi balla tail lai change garni. This is the rule.
        NewNode->prev = tail;
        tail = NewNode;
    }
}

//pop_front() function
void pop_front()
{
    if(head==NULL)
    {
        cout<<"Linked List is Empty";
        return;
    }
    
        Node* temp = head;
        head = head->next;
        if(head!=NULL)
        {
            head->prev=NULL;
        }
    else
        {
            tail=NULL;//(yo chai single node ko case hai) Since hamle head lai NULL ta banaisakem through head=head->next tail le chai ajai tei node lai point gareko xa so jaba hamle tyo node delete garinxa tail ma garbage value aayera basxa jasle problem parxa, so since ll empty hunxa jaba hamle euta vako node lai ninpop front garinxa so tail = NULL; garyo vane empty ll ko case balla hunxa. 
        }
     delete temp;// Yo temp lai last ma delte greko ramro ra safe
}

//pop_back()
void pop_back()
{
    if(head==NULL){
        cout<<"Linked list is empty";
        return;
    }
    Node* temp = tail;
    tail=tail->prev;

    if(tail!=NULL)
    {
        tail->next=NULL;    //This if condition is checked because if Linked list has only one node then tail->prev will be NULL and when we perform tail->next=NULL in code it will be NULL->next=NULL which doesnot make sense so.
    }
    else
    {
        head=NULL; //condition for single node
    }
    delete temp;
}
};

int main()
{
DoublyList ll;
ll.push_front(1);
ll.push_front(2);
ll.push_front(3);
ll.print();
ll.pushback(6);
ll.print();
ll.pop_front();
ll.print();
ll.pop_back();
ll.print();
}

