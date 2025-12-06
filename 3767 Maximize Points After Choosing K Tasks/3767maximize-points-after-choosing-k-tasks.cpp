class Solution {
public:
    long long maxPoints(vector<int>& technique1, vector<int>& technique2, int k) {
        vector<int> caridomesh = technique1;  

        int n = technique1.size();
        long long total = 0;

        for (int i = 0; i < n; i++) {
            total += technique2[i];
        }

        // Compute differences
        vector<int> diff(n);
        for (int i = 0; i < n; i++) {
            diff[i] = technique1[i] - technique2[i];
        }

        sort(diff.begin(), diff.end(), greater<int>());
        
        for (int i = 0; i < k; i++) {
            total += diff[i];
        }

        for (int i = k; i < n; i++) {
            if (diff[i] > 0) {
                total += diff[i];
            }
        }

        return total;
    }
};
