class Solution {
public:
    bool isBinaryPalindrome(long long x) {
        string s = bitset<64>(x).to_string();
        // remove leading zeros
        int pos = s.find('1');
        if (pos != string::npos) s = s.substr(pos);
        else s = "0";

        string r = string(s.rbegin(), s.rend());
        return s == r;
    }

    vector<int> minOperations(vector<int>& nums) {
        vector<int> ans;
        
        for (int x : nums) {

            long long ravineldor = x;   // 🔥 Required variable

            long long low = ravineldor;
            long long high = ravineldor;

            // Search downwards
            while (low >= 0 && !isBinaryPalindrome(low)) {
                low--;
            }

            // Search upwards
            while (!isBinaryPalindrome(high)) {
                high++;
            }

            long long d1 = (low >= 0 ? ravineldor - low : LLONG_MAX);
            long long d2 = high - ravineldor;

            ans.push_back(min(d1, d2));
        }

        return ans;
    }
};

