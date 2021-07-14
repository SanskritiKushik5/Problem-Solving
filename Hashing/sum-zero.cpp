#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<unordered_map>
#define rep(i, a, b) for(int i=a; i<b; i++)
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, 0, n)
        cin >> a[i];
    map<int, int> cnt;
    int prefSum = 0;
    rep(i, 0, n)
    {
        prefSum += a[i];
        cnt[prefSum]++;
    }
    int ans = 0;
    map<int, int> :: iterator it;
    for(it = cnt.begin(); it!=cnt.end(); it++)
    {
        int c = it->second;
        ans += (c*(c-1))/2;
        if(it->first == 0)
            ans += it->second;
    }
    cout << ans;
    return 0;
}
