// Question 3:Find the second highest score


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    vector<int> scores(n);

    cout << "Enter the scores: ";
    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }

    int max = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < scores.size(); i++)
    {
        if (scores[i] > max)
        {
            second = max;
            max = scores[i];
        }
        else if (scores[i] > second && scores[i] != max)
        {
            second = scores[i];
        }
    }

    if (second == INT_MIN)
    {
        cout << "No second highest score exists.";
    }
    else
    {
        cout << "The second highest score is: " << second;
    }

    return 0;
}
//Time complexity: O(n)