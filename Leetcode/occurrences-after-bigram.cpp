class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> words;
        vector<string> ans;
        for(int i=0; i<text.length(); i++){
            string str;
            while(text[i]!=' ' && i<text.length()){
                str += text[i];
                i++;
            }
            words.push_back(str);
        }
        int n = words.size();
        for(int i=0; i<n; i++){
            if(words[i]==first && i<n-2 && words[i+1]==second){
                ans.push_back(words[i+2]);
            }
        }
        return ans;
    }
};
