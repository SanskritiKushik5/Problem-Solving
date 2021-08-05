class Solution {
public:
    void combo(int i, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
    {
        if(i == arr.size()){
            if(target == 0)
                ans.push_back(ds);
            return;
        }
        if(arr[i] <= target){
            ds.push_back(arr[i]);
            combo(i, target - arr[i], arr, ans, ds);
            ds.pop_back();
        }
        combo(i+1, target, arr, ans, ds);
    }
    vector<vector<int>> combinationSum(vector<int>& can, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        combo(0, target, can, ans, ds);
        return ans;
    }
};
