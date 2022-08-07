class Solution {
public:
    int countSegments(string s) {
        stringstream str(s);
        string temp;

        vector<string> v;

        while (str >> temp)
        {
            v.push_back(temp);
        }

        return v.size();
    }
};
