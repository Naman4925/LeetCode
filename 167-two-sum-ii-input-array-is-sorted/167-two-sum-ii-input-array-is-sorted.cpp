class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector<int> indices;
        int st = 0, en = numbers.size()-1;
        while(st <= en)
        {
            if(numbers[st] + numbers[en] == target)
            {
                indices.push_back(st+1);
                indices.push_back(en+1);
                return indices;
            }
            else if(numbers[st] + numbers[en] < target)
            {
                st++;
            }
            else
            {
                en--;
            }
        }
        return indices;
    }
};