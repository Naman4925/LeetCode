class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=nums[0];
        int ma=nums[0];
        int mi=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
                swap(ma,mi);
            }
            ma=max(nums[i],ma*nums[i]);
            mi=min(nums[i],nums[i]*mi);
            ans=max(ans,ma);
        }
        return ans;
    }
};