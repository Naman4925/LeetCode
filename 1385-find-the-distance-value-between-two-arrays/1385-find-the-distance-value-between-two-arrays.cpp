class Solution {
public:
    // L and R will both move towards closest value of target and all 3 mid positions are checked till end, when L crosses R and loop breaks
    int binary_search_closest_value_finder(vector<int>& arr,int target,int d)
    {
        int left=0,right=arr.size()-1,mid;
        while(left<=right)
        {                                                                                                                                   
            mid = left + (right-left)/2;
            if(abs(arr[mid]-target)<=d)
            {
                return 1;
            }
            else if(arr[mid]>target)
            {
                right = mid-1;
            }
            else
            {
                left = mid+1;
            }
        }
        return 0;
    }
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans=0;
        sort(arr2.begin(),arr2.end());
        for(auto i : arr1)
        {
            if(binary_search_closest_value_finder(arr2,i,d))
            {
                ans++;                                      
            }
        }
        return arr1.size()-ans;
    }
};