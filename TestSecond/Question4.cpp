// Question 4:Find the first unique letter



#include <bits/stdc++.h>
using namespace std;

int firstUnique(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        bool unique = true;

        for (int j = 0; j < s.length(); j++)
        {
            if (i != j && s[i] == s[j])
            {
                unique = false;
                break;
            }
        }

        if (unique)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;

    cout << firstUnique(s);

    return 0;
}
//Time complexity: O(n^2)

