class Solution {
public:
    int arrayPairSum(vector<int>& v) {
        int left = -10000;
        int right = 10000;
        vector<int>freq(right - left + 1, 0);
        for (auto x : v) {
            freq[x - left]++;
        }
        int ans = 0, prev = 0;
        for (int i = left ; i <= right ; i++) {
            ans += ((freq[i - left] + 1 - prev) / 2) * i;
            prev = (prev + freq[i - left]) % 2;
        }
        return ans;
    }
};