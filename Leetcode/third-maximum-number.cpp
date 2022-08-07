class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(),nums.end()), nums.end());
        int n = nums.size();
        if(n==1) return nums[0];
        else if(n==2) return nums[n-1];
        return nums[n-3];
    }
};
