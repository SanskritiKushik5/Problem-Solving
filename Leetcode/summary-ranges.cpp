class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        vector<string> res;
        for(int i=0; i<n; i++){
            int x = nums[i];
            while(i+1<n && nums[i]+1==nums[i+1])
                i += 1;
            if(x!=nums[i])
                res.push_back(to_string(x)+"->"+to_string(nums[i]));
            else
                res.push_back(to_string(x));
        }
        return res;
    }
};
