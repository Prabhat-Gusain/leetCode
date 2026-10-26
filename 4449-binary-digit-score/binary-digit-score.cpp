class Solution {
public:
    int calculateScore(int a, int b) {
        int result=0;

        bitset<8>x(a);
        bitset<8>y(b);

        int s1=x.count();
        int s2=y.count();

        if(s1>=s2)
        {
            result=s1*s2;
        }
        else
        {
            result=s2/s1;
        }
        return result;
    }
};