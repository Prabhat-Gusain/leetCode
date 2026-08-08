class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>leftSum(n);
        vector<int>rightSum(n);
        vector<int>ans(n);
        int lsum,rsum=0;
        int i=0,j=n-1;

        while(i<n && j>=0)
        {
            if(i==0 && j==n-1)
            {
                lsum=0;
                rsum=0;
                leftSum[i]=lsum;
                rightSum[j]=rsum;
                i++;
                j--;
            }
            else
            {
                lsum+=nums[i-1];
                leftSum[i]=lsum;
                rsum+=nums[j+1];
                rightSum[j]=rsum;
                i++;
                j--;
            }
        }
        for(int i=0;i<n;i++)
        {
            ans[i]=abs(leftSum[i]-rightSum[i]);
        }
        return ans;
    }
};