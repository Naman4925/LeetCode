class Solution {
public:
    bool canJump(vector<int>& nums) {
        int rec=0;
        for(int i=0;i<nums.size();i++){
            if(rec<i){
                return false;
            }
            rec=max(rec,nums[i]+i);
        }
        return true;
    }
};