class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int smallestIndx=1000;

        for(int i=0;i<nums.size();i++)
        {
            int digit=0;
            int sumOfDigits=0;

            while(nums[i]>0)
            {
                digit=nums[i]%10;
                sumOfDigits+=digit;
                nums[i]/=10;
            }

            if(sumOfDigits==i)
            {
                smallestIndx=min(smallestIndx,i);
            }
        }
        if(smallestIndx<1000)
        {
            return smallestIndx;
        }
        return -1;
    }
};