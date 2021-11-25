class Solution {
public:
    bool isValid(string s) {
        stack<char> paren;
        int n = s.length();
        int i = 0;
        while(i < n){
             if(s[i]=='(' || s[i]=='[' || s[i]=='{') paren.push(s[i]);
               else                         
               {
                  if(!paren.empty() && ((s[i]==')' && paren.top()=='(')||(s[i]==']' && paren.top()=='[')||(s[i]=='}' && paren.top()=='{'))) paren.pop(); 
                   else return false;  
                }
             i += 1;
         } 
        
        if(paren.empty()) return true;  
        return false;   
    }
};
