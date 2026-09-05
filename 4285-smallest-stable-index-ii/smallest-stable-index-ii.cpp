class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> mx(n, 0), mn(n, 0);
        int mni=nums[n-1];
        int mxi=nums[0];

        for(int i=n-1;i>=0;i--)
        {
            mni=min(nums[i],mni);
            mn[i]=mni;
        }

        for(int i=0;i<n;i++)
        {
            mxi=max(mxi,nums[i]);
            mx[i]=mxi;
        }

        for(int i=0;i<n;i++)
        {
            if(mx[i]-mn[i]<=k)
            {
                return i;
            }
        }
        return -1;
    }
};