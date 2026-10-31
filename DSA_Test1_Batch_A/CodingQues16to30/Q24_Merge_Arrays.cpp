#include <iostream>
using namespace std;

int main()
{
    int n, m;
    int arr1[100], arr2[100], arr3[200];
cout << "Enter the size of the first array: ";
    cin >> n;

    cout << "Enter the elements of the first array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> m;

    cout << "Enter the elements of the second array: ";
    for(int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    for(int i = 0; i < n; i++)
    {
        arr3[i] = arr1[i];
    }

    for(int i = 0; i < m; i++)
    {
        arr3[n + i] = arr2[i];
    }

    cout << "Merged Array: ";

    for(int i = 0; i < n + m; i++)
    {
        cout << arr3[i] << " ";
    }

    return 0;
}