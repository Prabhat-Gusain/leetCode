class Solution {
public:
    int reverseNum(int n)
    {
        int revNum=0;
        int lastDigit=0;
        while(n>0)
        {
            lastDigit=n%10;
            n=n/10;
            revNum=(revNum*10)+lastDigit;
        }
        return revNum;
    } 
    int mirrorDistance(int n) {
        return abs(n-reverseNum(n)); 
    }
};