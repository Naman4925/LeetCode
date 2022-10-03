class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // int n=temperatures.size();
        // vector<int>v;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(temperatures[i]<temperatures[j]){
        //             v.push_back(j-i);
        //             break;
        //         }
        //         else if(j==n-1){
        //             v.push_back(0);
        //         }
        //     }
        // }
        // v.push_back(0);
        // return v;
        
        stack<int> st;
        vector<int> v;
        for(int i=temperatures.size()-1;i>=0;i--){
            if(st.empty()){
                v.push_back(0);
                st.push(i);
            }
            else{
                while(!st.empty() && temperatures[st.top()]<=temperatures[i]){
                    st.pop();
                }
                if(st.empty()){
                    v.push_back(0);
                    st.push(i);
                }
                else{
                    v.push_back(st.top()-i);
                    st.push(i);
                }
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};