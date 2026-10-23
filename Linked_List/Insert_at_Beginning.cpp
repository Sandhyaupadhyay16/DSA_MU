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
void insertAtBegin(Node* &head, int val)
{
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

int printList(Node *head)
{
    Node* temp = head;
    while (temp != nullptr)
    {
        cout << temp->data;
        cout << "->";
        temp = temp->next;
    }
}
int main()
{
    Node* head= new Node(10);
    insertAtBegin(head, 20);
    insertAtBegin(head, 30);
    insertAtBegin(head, 40);
    insertAtBegin(head, 50);

    printList(head);

    return 0;
}