class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        int min_diff = INT_MAX;
        for(int i=1; i<arr.size(); i++){
            int d = arr[i] - arr[i-1];
            if(d<min_diff){
                min_diff = d;
                ans.clear();
                ans.push_back({arr[i-1], arr[i]});
            }
            else if(d == min_diff) {
				   ans.push_back({arr[i-1], arr[i]});
			}
        }
        return ans;
    }
};
