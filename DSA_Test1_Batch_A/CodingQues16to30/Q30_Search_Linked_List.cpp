#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int n, value, target,count=0;
    cout << "Enter number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> value;

        Node *newNode = new Node();

        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    cout << "Enter value to search: ";
    cin >> target;

    Node *temp = head;
    bool found = false;

    while (temp != NULL)
    {
        if (temp->data == target)
        {
            found = true;
            break;
        }
count++;
        temp = temp->next;
    }

    if (found)
    {
        cout << "Element Found at node " << count+1;
    }
    else
    {
        cout << "Element Not Found";
    }

    return 0;
}