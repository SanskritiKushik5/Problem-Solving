class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        int end = s.length()-1;
        int start = 0;

        if(s.find(goal[0]) == string::npos)
            return false;

        string substr = goal.substr(0,1);
        int index = 0;
        while ((index = s.find(substr, index)) != string::npos) {
            if(s.substr(index, end) == goal.substr(0, end-index+1)){
                if(s.substr(0, index) == goal.substr(end-index+1, end))
                    return true;
            }
            index += substr.length();
        }
        return false;
    }
};
