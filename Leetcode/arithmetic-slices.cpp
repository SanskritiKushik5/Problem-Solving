class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int ans = 0;
        int d = 0;
        int n = nums.size();
        for(int i=0; i<n-2; i++){
            d = nums[i+1] - nums[i];
            for(int j=1; j<n-1; j++){
                if(i<n-(j+1) && nums[i+j+1]-nums[i+j] == d)
                    ans += 1;
                else 
                    break;
            }    
        }
        return ans;
    }
};
