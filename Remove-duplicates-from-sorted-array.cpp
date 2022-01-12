class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int i = 0, j = 0;
        while(++j < nums.size()){
            if(nums[j] != nums[i]) 
               nums[++i] = nums[j];  
        }
        return i+1;
    }
};
