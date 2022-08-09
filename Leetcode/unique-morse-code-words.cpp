class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string morse[26] = {".-","-...","-.-.","-..",".","..-.","--.",
                            "....","..",".---","-.-",".-..","--","-.",
                            "---",".--.","--.-",".-.","...","-","..-",
                            "...-",".--","-..-","-.--","--.."};
        unordered_map<string, int> map;
        for(auto word:words){
            string temp = "";
            for(auto i:word){
                temp += morse[int(i)-97];
            }
            map[temp]++;
        }
        return map.size();
    }
};
