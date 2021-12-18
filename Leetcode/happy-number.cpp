class Solution {
public:
    bool isHappy(int n) {
        
        while(n>9){
            int sum=0;
            int rem; 
            while(n!=0)    
            {    
                rem=n%10;    
                sum += rem*rem;
                n/=10;    
            }   
            n=sum;
        }
        if(n==1 || n==7) return true;
        return false;
    }
};
