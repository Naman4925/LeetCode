class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> ans;
        for(int i=0;i<heights.size();i++){
            ans.push_back(heights[i]);
        }
        sort(ans.begin(),ans.end());
        int k=0;
        int count=0;
        for(int i=0;i<heights.size();i++){
            if(heights[i]==ans[k]){
                k++;
                continue;
            }
            else{
                count++;
                k++;
            }
        }
        return count;
    }
};