class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> map;
        bool flag = false;
        for(int i=0; i<nums.size(); i++)
            map[nums[i]]++;
        for(auto x:map){
            if(x.second>1){
                flag = true;
                break;
            }
        }
        return flag;
        
    }
};
