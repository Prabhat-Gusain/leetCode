class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int instableScore=0;
        int stableScore=0;
        int n=nums.size();
        int maxPrefix=0;
        int minSuffix;
        int minStableScore=0;
        vector<int>suffix(n,0);

        for(int i=0;i<n;i++)
        {
            maxPrefix=max(maxPrefix,nums[i]);
            minSuffix=INT_MAX;
            for(int j=i;j<n;j++)
            {
                suffix[j]=nums[j];
                minSuffix=min(minSuffix,suffix[j]);
            }
            instableScore=maxPrefix-minSuffix;
            if(instableScore<=k)
            {
                return i;
            }

        }
        return -1;
    }
};