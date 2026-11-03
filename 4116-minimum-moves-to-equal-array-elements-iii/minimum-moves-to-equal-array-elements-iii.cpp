class Solution {
public:
    int maximum(vector<int>& nums,int n)
    {
        int max=nums[0];
        for(int i=1;i<n;i++)
        {
            if(nums[i]>max)
            {
                max=nums[i];
            }
        }
        return max;
    }
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int greatest=maximum(nums,n);
        int result=0;

        for(int i=0;i<n;i++)
        {
            int add=greatest-nums[i];

            if(add>0)
            {
                result+=add;
            }
        }
        return result;
    }
};