class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target || nums[i] > target) {
                if (i == 0) return 0;
                return i;
            }
        }
        return nums.size();
    }
};