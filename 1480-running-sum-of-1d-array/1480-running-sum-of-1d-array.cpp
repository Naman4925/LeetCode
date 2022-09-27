class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0,total=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            total+=sum;
            nums[i]=total;
            total=0;
        }
        return nums;
    }
};