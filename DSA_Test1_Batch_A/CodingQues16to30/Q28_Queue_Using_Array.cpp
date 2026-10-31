#include <iostream>
using namespace std;

int main()
{
    int queue[100];
    int front = -1, rear = -1;
    int choice, value;

    while(true)
    {
        cout << "\n1. Enqueue";
        cout << "\n2. Dequeue";
        cout << "\n3. Display";
        cout << "\n4. Exit";

        cout << "\nEnter choice: ";
        cin >> choice;

        if(choice == 1)
        {
            if(rear == 99)
            {
                cout << "Queue is Full";
            }
            else
            {
                cout << "Enter value: ";
                cin >> value;

                if(front == -1)
                {
                    front = 0;
                }

                rear++;
                queue[rear] = value;

                cout << "Element inserted";
            }
        }
        else if(choice == 2)
        {
            if(front == -1 || front > rear)
            {
                cout << "Queue is Empty";
            }
            else
            {
                cout << "Deleted element: " << queue[front];
                front++;

                if(front > rear)
                {
                    front = -1;
                    rear = -1;
                }
            }
        }
        else if(choice == 3)
        {
            if(front == -1)
            {
                cout << "Queue is Empty";
            }
            else
            {
                for(int i = front; i <= rear; i++)
                {
                    cout << queue[i] << " ";
                }
            }
        }
        else if(choice == 4)
        {
            break;
        }
        else
        {
            cout << "Invalid Choice";
        }
    }

    return 0;
}