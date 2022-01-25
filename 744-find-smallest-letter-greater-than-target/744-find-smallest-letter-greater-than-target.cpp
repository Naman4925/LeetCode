class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans;
        for(int i=0;i<letters.size();i++){
            if(letters[i]> target){
                 return letters[i];
            }
        }
        if(letters[0]<target){
            return letters[0];
        }
        return ' ';
    }
};