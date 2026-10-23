#include <iostream>
using namespace std;
int main()
{
    int length, min, n, arr[n], diff;
    cout << "Enter the length of the rod:" << endl;
    cin >> length;
    cout << "Enter the minimum cut:" << endl;
    cin >> min;
    cout << "Enter the number of cuts available:" << endl;
    cin >> n;
    cout << "Enter the cuts:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int index;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= min)
        {
            if (length > 0)
            {
                diff = length - arr[i];
            }
        }
        index = i;
    }
    if (index == n - 1)
    {
        return true;
    }
    else
    {
        return true;
    }
    return 0;
}