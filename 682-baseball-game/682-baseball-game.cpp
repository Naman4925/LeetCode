class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                s.pop();
            }
            else if(operations[i]=="+"){
                int first=s.top();
                s.pop();
                int second=s.top();
                s.push(first);
                s.push(first+second);
            }
            else if(operations[i]=="D"){
                s.push(2*s.top());
            }
            else{
                int n=stoi(operations[i]);
                s.push(n);
            }
        }
        int total=0;
        while(s.size()!=0){
            total+=s.top();
            s.pop();
        }
        return total;
    }
};
