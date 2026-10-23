#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
}; 

int printList(Node* head)
{
    Node* temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data;
        cout<<"->";
        temp=temp->next;
    }
}
int main()
{
    //creating first node
    Node* head= new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
   
    printList(head);

    return 0;
}