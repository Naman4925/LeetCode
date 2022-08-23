class Solution {
public:
    int findPeakElement(vector<int>& arr) {
    int max = arr[0];
    int index = 0;                        
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] > max)
            index = i;                
            max = arr[i];             
    }
    return index;
    }
};