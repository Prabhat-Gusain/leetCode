class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(low==mid && high==mid)
            {
                return nums[mid];
            }
            else if(nums[high]<nums[mid])
            {
                if(nums[high]<nums[low])
                {
                    low=mid+1;
                }
                else //nums[high]>=nums[low]
                {
                    low=mid;
                }
            }
            else //nums[high]>=nums[mid]
            {
                if(nums[low]>nums[high])
                {
                    high=mid;
                }
                else //nums[low]<=nums[high]
                {
                    high=mid;
                }
            }
        }
        return -1;
    }
};