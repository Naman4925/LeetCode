class Solution {
public:
    string interpret(string command) {
        string ans;
        for(int i=0;i<command.size();i++){
            if(command[i]=='(' && command[i+1]==')'){
                ans+='o';
            }
            else if(command[i]=='(' && command[i+1]!=')'){
                continue;
            }
            else if(command[i]==')'){
                continue;
            }
            else{
                ans+=command[i];
            }
        }
        return ans;
    }
};