class Solution {
public:
    int arraySign(vector<int>& nums) {
        int mul=1;
        for(int i=0;i<nums.size();i++){
        if(nums[i]<0){
            mul*=-1;
        }
        else if(nums[i]>0){
            mul*=1;
        }
        else
            mul*=0;
        }
        return mul;
    }
};