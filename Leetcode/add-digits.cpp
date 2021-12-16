class Solution {
public:
    int addDigits(int num) {
        
        while(num>9){
            int rem = 0;
            int ans = num;
            for(int i=0; ans>0; i++){
                rem += ans%10;    
                ans = ans/10;    
            }
            num = rem;
        }
        return num;
    }
};
