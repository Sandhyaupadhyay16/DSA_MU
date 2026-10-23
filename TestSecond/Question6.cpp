//Question 6: the best buy and sell day

#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int minPrice = INT_MAX;
    int profit = 0;

    for (int i = 0; i < prices.size(); i++)
    {
        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }
        else if (prices[i] - minPrice > profit)
        {
            profit = prices[i] - minPrice;
        }
    }

    return profit;
}

int main()
{
    int n;
    cout << "Enter the number of days: ";
    cin >> n;

    vector<int> prices(n);

    cout << "Enter the prices: ";
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }

    cout << maxProfit(prices);

    return 0;
}
//Time complexity: O(n)