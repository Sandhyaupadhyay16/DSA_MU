//Question 5:Find the first repeated roll number


#include <bits/stdc++.h>
using namespace std;

int firstRepeated(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                return arr[i];
            }
        }
    }

    return -1;
}

int main()
{
    int n;
    cout << "Enter the number of roll numbers: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the roll numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << firstRepeated(arr);

    return 0;
}
//Time complexity: O(n^2)