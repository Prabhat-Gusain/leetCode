class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int>freq(10,0);
        for(int i:digits)
        {
            freq[i]++;
        }
        int count=0;
        
        for(int j=100;j<=999;j++)
        {
            if(j%2!=0)continue;
            int n=j;
            int a=n%10;
            n/=10;
            int b=n%10;
            n/=10;
            int c=n%10;

            vector<int>hash(10,0);

            hash[a]++;
            hash[b]++;
            hash[c]++;

            bool flag=true;

            for(int k=0;k<=9;k++)
            {
                if(hash[k]>freq[k])
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            {
                count++;
            }
        }
        return count;
    }
};