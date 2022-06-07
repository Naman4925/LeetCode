class Solution {
public:
    int maxArea(vector<int>& h) {
        int area=0;
        int i=0,j=h.size()-1;
        while(i<j){
            area=max(area,min(h[i],h[j])*(j-i));
            if(h[i]<=h[j])
                i++;
            else
                j--;
        }
        return area;
    }
};