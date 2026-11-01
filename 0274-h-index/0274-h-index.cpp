class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        vector<int> counts(n + 1, 0);
        for (int c : citations) {
            if (c >= n) {
                counts[n]++;
            } else {
                counts[c]++;
            }
        }
        int papers = 0;
        for (int i = n; i >= 0; --i) {
            papers += counts[i];
            if (papers >= i) {
                return i;
            }
        }
        return 0;
    }
};