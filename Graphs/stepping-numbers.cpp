
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
public:

    int steppingNumbers(int n, int m)
    {
        // Code Here
        queue<int> q;
        for(int i=0;i<10;i++){
            q.push(i);
        }
        int ans = 0;
        unordered_set<int> st;
        while(!q.empty()){
            int x = q.front();
            q.pop();
            if(x > m) continue;
            if(x >= n && x <= m){
                st.insert(x);
            }
            int last_digit = x%10;
            if(last_digit != 9) q.push(x*10+last_digit+1);
            if(last_digit != 0) q.push(x*10+last_digit-1);
        }
        return st.size();
    }
};


// { Driver Code Starts.

int main()
{
    Solution obj;
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        cout << obj.steppingNumbers(n,m) << endl;
    }
	return 0;
}

  // } Driver Code Ends
