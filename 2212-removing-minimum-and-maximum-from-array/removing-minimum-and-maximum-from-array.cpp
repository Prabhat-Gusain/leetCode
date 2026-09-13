class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int minIndx1=0;
        int mxIndx1=0;
        
        if(n==1)return 1;

        while(i<n)
        {
            if(nums[i]<nums[minIndx1])
            {
                minIndx1=i;
            }
            else if(nums[i]>nums[mxIndx1])
            {
                mxIndx1=i;
            }
            i++;
        }
        int result1 = max(minIndx1,mxIndx1)+1;

        int result2 = n - min(minIndx1, mxIndx1);
       
        int leftIndex = min(minIndx1, mxIndx1);
        int rightIndex = max(minIndx1, mxIndx1);

        int result3 = (leftIndex + 1) + (n - rightIndex);


        return min(result1, min(result2, result3));
        
    }
};