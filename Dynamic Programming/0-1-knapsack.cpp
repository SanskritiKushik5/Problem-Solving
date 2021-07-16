#include <iostream>
using namespace std;
const int N = 1e3+2, mod = 1e9+7;
int val[N], wt[N];
int dp[N][N]
int Knapsack(int n, int w)
{
    if(w<0 || n<=0){
        return 0;
    }
    if(dp[n][w]!=-1)
        return dp[n][w];

    if(wt[n-1]>w)
        dp[n][w] = Knapsack(n-1, w);
    else
        dp[n][w] = max(Knapsack(n-1, w), Knapsack(n-1, w-wt[n-1])+val[n-1]);
    return dp[n][w];
}
int main()
{
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++)
            dp[i][j] = -1;
    }
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin>>wt[i];
    }
    for(int i=0; i<n; i++){
        cin>>val[i];
    }
    int w;
    cin>>w;
    cout<<Knapsack(n,w)<<end;
    return 0;
}
