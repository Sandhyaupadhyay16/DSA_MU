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


int main()
{
    //creating first node
    Node* head= new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    
    cout<<head->data;
    cout<<"->";
    cout<<head->next->data;
    cout<<"->";
    cout<<head->next->next->data;
    cout<<"->";
    cout<<head->next->next->next->data;
    cout<<"->";
    cout<<head->next->next->next->next->data;

    return 0;
}