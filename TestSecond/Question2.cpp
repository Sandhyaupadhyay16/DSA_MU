
#include <bits/stdc++.h>
using namespace std;

// Question 2: Find the best pair of students
void best_pair(vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                cout << "Indices: [" << i << "," << j << "]" << endl;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    int target;
    cout << "Enter an array: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter Target: ";
    cin >> target;

    best_pair(arr, target);

    return 0;
}

//Time complexity: O(n^2)
