class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        
        while(columnNumber){
            char ch = ((columnNumber-1)%26) + 65;
            ans = ch + ans;
            columnNumber = (columnNumber-1)/26;
        }
        return ans;
    }
};
