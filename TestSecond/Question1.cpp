//Question 1:Find the missing seat


#include <bits/stdc++.h>
using namespace std;

int findMissing(vector<int> &arr)
{
    int n = arr.size();
    int totalsum = n * (n + 1) / 2;
    int arrsum = 0;

    for (int i = 0; i < n; i++)
    {
        arrsum += arr[i];
    }

    return totalsum - arrsum;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements (from 0 to " << n << "): ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int missing = findMissing(arr);

    cout << "The missing number is: " << missing << endl;

    return 0;
}

//Time complexity: O(n)
