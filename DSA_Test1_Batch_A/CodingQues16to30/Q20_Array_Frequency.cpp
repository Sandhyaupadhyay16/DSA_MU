#include <bits/stdc++.h>
    using namespace std;

int main()
{
    int n, arr[100], target;
    int count = 0;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the target element: ";
    cin >> target;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            count++;
        }
    }

    cout << "Frequency = " << count;

    return 0;
}