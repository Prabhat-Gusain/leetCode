class Solution {
public:
    int numberOfMatches(int n) {
        int result=0;
        int matches=0;

        while(n>1)
        {
            if(n%2 == 0)//even teams
            {
                matches=n/2;
                n=n/2;
            }
            else if(n%2 != 0) //odd number of teams
            {
                matches=(n-1)/2;
                n=((n-1)/2)+1;
            }
            result+=matches;
        }
        return result;
    }
};