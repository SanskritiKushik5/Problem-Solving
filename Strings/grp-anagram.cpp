vector<vector<string> > Anagrams(vector<string>& string_list) 
{
    // Your Code Here
    map<string, vector<string>> mp;
    for(auto x: string_list){
        string k = x;
        sort(k.begin(), k.end());
        mp[k].push_back(x);
    }
    vector<vector<string>> ans;
    for(auto x: mp){
        ans.push_back(x.second);
    }
    return ans;
    
}
