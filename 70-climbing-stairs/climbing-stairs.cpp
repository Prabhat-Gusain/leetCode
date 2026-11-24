class Solution {
public:
    int climbStairs(int n) {
        int prev1=1;
        int prev=1;
        int temp=0;

        if(n<=1)
        {
            return n;
        }

        for(int i=2;i<=n;i++)
        {
            temp=prev+prev1;
            prev1=prev;
            prev=temp;
        }
        return temp;
    }
};