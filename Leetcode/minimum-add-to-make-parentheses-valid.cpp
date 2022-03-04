class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> paren;
        int n = s.length();
        int i = 0;
        while(i < n){
            if(s[i]=='(') 
                paren.push(s[i]);
            else if(!paren.empty() && ((s[i]==')' && paren.top()=='(')))
                paren.pop();
            else 
                paren.push(s[i]);
            i += 1;
         } 

        if(paren.empty()) return 0; 
        int a = paren.size();
        return a;   
    }
};
