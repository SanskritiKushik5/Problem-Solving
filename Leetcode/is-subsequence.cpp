class Solution {
public:
    bool isSubsequence(string s, string t) {
        stack<char> a;
        if(s.length()==0) 
            return true;
        else if(t.length()==0) 
            return false;
        else{
            for(int i=0; i<s.length(); i++)
                a.push(s[i]);
            for(int i=t.length()-1; i>=0; i--){
                if(a.empty())
                    return true;
                else if (t[i]==a.top())
                    a.pop();
            }
        }

        if(a.empty()) return true;
        return false;
    }
};
