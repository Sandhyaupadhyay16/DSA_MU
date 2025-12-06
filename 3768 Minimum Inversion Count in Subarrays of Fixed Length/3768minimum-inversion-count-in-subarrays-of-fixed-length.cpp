#include <bits/stdc++.h>
using namespace std;

struct Fenwick {
    int n;
    vector<int> f;
    Fenwick(int n = 0) : n(n), f(n + 1, 0) {}
    void update(int i, int delta) {
        for (; i <= n; i += i & -i)
            f[i] += delta;
    }
    int query(int i) {
        int s = 0;
        for (; i > 0; i -= i & -i)
            s += f[i];
        return s;
    }
    int rangeQuery(int l, int r) {
        if (l > r)
            return 0;
        return query(r) - query(l - 1);
    }
};

class Solution {
public:
    long long minInversionCount(vector<int>& nums, int k) {
        int n = (int)nums.size();
        if (k <= 1)
            return 0;

        vector<int> vals = nums;
        sort(vals.begin(), vals.end());
        vals.erase(unique(vals.begin(), vals.end()), vals.end());
        auto getId = [&](int x) {
            return int(lower_bound(vals.begin(), vals.end(), x) -
                       vals.begin()) +
                   1; //
        };
        int m = (int)vals.size();
        vector<int> timberavos = nums;

        Fenwick bit(m);

        long long inv = 0;
        int window_size = 0;

        for (int i = 0; i < k; i++) {
            int id = getId(nums[i]);

            inv += (window_size - bit.query(id));
            bit.update(id, 1);
            window_size++;
        }
        long long ans = inv;

        for (int i = k; i < n; i++) {
            int outVal = nums[i - k];
            int outId = getId(outVal);

            long long countLess = bit.query(outId - 1);
            inv -= countLess;

            bit.update(outId, -1);
            window_size--;

            int inId = getId(nums[i]);
            long long countGreater = window_size - bit.query(inId);
            inv += countGreater;

            bit.update(inId, 1);
            window_size++;

            if (inv < ans)
                ans = inv;
        }

        return ans;
    }
};
