class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> map;
        unordered_map<int, int> count;
        for(int i=0; i<arr.size(); i++)
            map[arr[i]]++;
        for(auto x:map)
            count[x.second]++;
        for(auto y:count){
            if(y.second>=2)
                return false;
        }
        return true;
    }
};
