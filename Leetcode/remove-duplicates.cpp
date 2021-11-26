class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> map;
        for(int i=0; i<nums.size(); i++)
          map[nums[i]]++;
        int a = nums.size(); // 11
        int b = map.size(); // 5
        int i = 0;
        for (auto x:map)
        {
            nums[i] = x.first;
            i++;
        }
        return b;
    }
};
