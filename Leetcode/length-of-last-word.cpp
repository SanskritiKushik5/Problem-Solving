class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(), s.end());
        int count = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i]!=' '){
                for(int j=i; j<s.length(); j++){
                    if(s[j]!=' ') count++;
                    else break;
                }
                break;
            }     
        }
        return count;
    }
};
