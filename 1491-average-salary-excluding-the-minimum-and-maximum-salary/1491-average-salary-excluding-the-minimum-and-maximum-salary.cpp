class Solution {
public:
    double average(vector<int>& salary) {
        /*sort(salary.begin(),salary.end());
        int low=0,high=salary.size()-1;
        int ans=0;
        int mid;
        if(salary.size()%2!=0){
            mid=(high-low)/2;
            ans=salary[mid];
        }
        else{
            mid=(high-low)/2;
            ans=(salary[mid]+salary[mid+1])/2;
        }
        return ans;*/
        
        sort(salary.begin(),salary.end());
        double sum=0;
        double count=0;
        for(double i=1;i<salary.size()-1;i++){
            sum+=salary[i];
            count++;
        }
        return sum/count;
    }
};