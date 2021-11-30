class Solution {
public:
    int climbStairs(int n) {
        if(n==1)
            return 1;
        else if(n==2)
            return 2;
        else {
            int n1=1, n2=2, n3=0;
            for(int i=3;i<=n;i++){
                n3=n1+n2;  
                n1=n2;    
                n2=n3;
            }   
            return n3;
        }
    }
    // int climbStairs(int n) {
    //     if(n==1)
    //         return 1;
    //     else if(n==2)
    //         return 2;
    //     else if(n==3)
    //         return 3;
    //     else {
    //         return climbStairs(n-1)+climbStairs(n-2);
    //     }
    // }
};
/*
(1) -- 1            
(2) -- 2
(3) -- 3     (1)+(2)
(4) -- 5     (2)+(3)
(5) -- 8     (3)+(4)
*/

     
