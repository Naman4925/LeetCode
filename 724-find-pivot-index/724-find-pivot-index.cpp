class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int total = 0;
        for(int i=0;i<nums.size();i++) {
            total += nums[i];
        }
        int left=0;
        for(int i=0; i<nums.size(); i++) {
            total-=nums[i];
            if(left == total) return i;
            left+=nums[i];
        }
        //if(total-nums[0] == 0 || total-nums[nums.size()-1] == 0) return 0;
        
        return -1;
        
    }
};