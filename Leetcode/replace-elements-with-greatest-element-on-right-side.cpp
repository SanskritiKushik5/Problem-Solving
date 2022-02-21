class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size();
        for(int i=0; i<n-1; i++){
            int x = *max_element(arr.begin()+i+1, arr.end());
            ans.push_back(x);
        }
        ans.push_back(-1);
        return ans;
    }
};
