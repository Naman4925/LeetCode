class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=0;
        while(i<nums.size()){
            int correct=nums[i];
            if(correct<nums.size() && nums[i]!=nums[correct]){
                swap(nums[i],nums[correct]);
            }
            else{
                i++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i){
                return nums[i];
            }
        }
        return -1;
    }
};