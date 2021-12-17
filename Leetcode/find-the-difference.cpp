class Solution {
public:
    char findTheDifference(string s, string t) {
        int sumofs = 0, sumoft = 0, diff;
        for(int i = 0; s[i]; i++) sumofs += int(s[i]);
        for(int i = 0; t[i]; i++) sumoft += int(t[i]);
        return (sumoft - sumofs);
        
    }
};
