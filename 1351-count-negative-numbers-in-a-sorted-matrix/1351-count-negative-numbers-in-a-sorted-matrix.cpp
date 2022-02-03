class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for (auto &x: grid) 
            count = x[0] >= 0 ? count + b_count(x, 0, x.size() - 1) : count + x.size(); 
        return count;
    }
    
    int b_count(vector<int>& nums, int s, int l) {
        if (s <= l) {
            int mid = (s + l) >> 1;
            return (nums[mid] < 0) ? 1 + b_count(nums, s, mid - 1) + b_count(nums, mid + 1, l) : b_count(nums, mid + 1, l);
        }
        return 0;
    }
};