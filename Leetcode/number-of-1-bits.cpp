class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans = 0;
        int x;
        for(int i=0; i<32; i++){
            x = n % 2;
            n >>= 1;
            ans += (x) ? 1:0;
        }
        return ans;
    }
};
