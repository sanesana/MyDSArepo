class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map <int, int> h;
        
        for(int n : nums) {
            h[n]++;
        }
        
        int pairs = 0;
        for(auto it : h) {
            int n = it.first;
            if(k > 0) {
                if(h.count(n + k)) {
                    pairs++;
                }
            }
            else {
                // k == 0
                if(h[n] > 1) {
                    pairs++;
                }
            }
        }
        
        return pairs;
    }
};
