class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int i=0;
        while(i<nums.size()){
            int correct=nums[i]-1;
            if(correct<nums.size() && nums[i]!=nums[correct]){
                swap(nums[i],nums[correct]);
            }
            else{
                i++;
            }
        }
         vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i+1){
                ans.push_back(nums[i]);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};