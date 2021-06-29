// find duplicate in an array of N+1 Integers

 int findDuplicate(vector<int>& nums) {
      int ans=0;
      unordered_map<int, int> map;
      for(int i=0; i<nums.size(); i++)
          map[nums[i]]++;
      for (auto x:map)
      {
          if (x.second > 1)
          {
              ans = x.first;
              break;
          }
      }
      return ans;
  }
