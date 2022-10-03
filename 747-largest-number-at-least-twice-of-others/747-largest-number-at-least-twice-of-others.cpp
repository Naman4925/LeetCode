class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int largest=0;
        int second=0;
        int index;
        for(int i=0;i<nums.size();i++){
            if(largest<nums[i]){
                largest=nums[i];
                index=i;
            }
        }
         for(int i=0;i<nums.size();i++){
             if(nums[i]==largest){
                 continue;
             }
            else if(second<nums[i]){
                second=nums[i];
            }
        }
        if((2*second)<=largest){
            return index;
        }
        return -1;
    }
};