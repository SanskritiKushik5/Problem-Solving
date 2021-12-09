class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        long int val = 1;
        for (int k = 0; k <= rowIndex; k++)
        {
            ans.push_back(val);
            val = val * (rowIndex - k) / (k + 1);
        }
        return ans;
    }
};
