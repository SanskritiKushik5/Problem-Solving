class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans = haystack.find(needle);
        if(ans>=0) return ans;
        else return -1;
    }
};
