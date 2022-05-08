class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int v;
        sort(nums.begin(),nums.end());
        v=nums[nums.size()-k];
        return v;
    }
};