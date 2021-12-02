class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> map;
        for(int i=0; i<nums.size(); i++)
          map[nums[i]]++;
        for (auto x:map){
            if(x.second == 1){
                return x.first;
            }
        }
        return 0;
    }
};
