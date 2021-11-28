class Solution {
public:
    vector<int> plusOne(vector<int>& v) {
        int count_nine = count(begin(v), end(v), 9);
        int n = v.size();
        if(n == count_nine){
            v[0] = 1;
            for(int i=1; i<n; i++)
                v[i] = 0;
            v.push_back(0);
        }else if(v[n-1]!=9){
            v[n-1] += 1;
        }else{
            while(n!=0){
                if(v[n-1]==9) v[n-1] = 0;
                else {v[n-1] += 1; break;}
                n -= 1;
            }
        }
        return v;
    }
};
