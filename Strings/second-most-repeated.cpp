class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        int max=0;
        unordered_map<string, int> map;
        for(int i=0; i<n; i++){
            map[arr[i]]++;
        }
        int first_max = INT_MIN, sec_max = INT_MIN;
        for (auto it = map.begin(); it != map.end(); it++) {
            if (it->second > first_max) {
                sec_max = first_max;
                first_max = it->second;
            }
     
            else if (it->second > sec_max &&
                     it->second != first_max)
                sec_max = it->second;
        }
     
        // Return string with occurrence equals
        // to sec_max
        for (auto it = map.begin(); it != map.end(); it++)
            if (it->second == sec_max)
                return it->first;
    }
};
