class Solution {
public:
  int dp[1000][1000];
  int solve(string s, string t, int m, int n){
      if(m==-1) return n+1;
      if(n==-1) return m+1;
      
      if(dp[m][n]!=-1) return dp[m][n];
      if(s[m]==t[n]) return dp[m][n]=solve(s, t, m-1, n-1);
      
      int a = solve(s, t, m-1, n-1);
      int b = solve(s, t, m, n-1);
      int c = solve(s, t, m-1, n);
      
      return dp[m][n] = 1+min(a,min(b, c));
  }
    int editDistance(string s, string t) {
        memset(dp, -1, sizeof(dp));
        int m = s.length();
        int n = t.length();
        return solve(s, t, m-1, n-1);
    }
};
