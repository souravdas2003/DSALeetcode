class Solution {
public:    
    int climbStairs(int n) {       
        if(n<=1)
            return 1;
        int x0 = 1;
        int x1 = 1;
        int curr=0;
        for(int i=2;i<=n;i++)
        {
            curr=x1+x0;
            x0= x1;
            x1=curr;
        }         
        return curr;
    }
};