class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int i = 0; i < numRows; i++)
        {
            int val = 1;
            vector<int> temp;
            for (int k = 0; k <= i; k++)
            {
                temp.push_back(val);
                val = val * (i - k) / (k + 1);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
