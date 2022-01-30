class Solution {
public:
    int binarySearch(vector<int> arr){
        int start = 0, end = arr.size()-1;
        
        while(start<=end){
            int mid = start+(end-start)/2;
            
            if(arr[mid] == 0)
                end = mid-1;
            else
                start = mid+1;
        }
        return start;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        priority_queue<pair<int,int>> maxH;
        vector<int> v;
        
        for(int i=0 ; i<mat.size() ; i++){
            int ct = binarySearch(mat[i]);
            maxH.push({ct, i});
            
            if(maxH.size() > k)
                maxH.pop();
        }
        while(!maxH.empty()){
            v.push_back(maxH.top().second);
            maxH.pop();
        }
        reverse(v.begin(), v.end());
        return v;
    }
};