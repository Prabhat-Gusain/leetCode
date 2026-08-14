class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evenCount=0;
        for(int i=0;i<nums.size();i++)
        {
            int numDigit=0;
            while(nums[i]>0)
            {
                numDigit++;
                nums[i]/=10;
            }
            if(numDigit%2==0)
            {
                evenCount++;
            }
        }
        return evenCount;
    }
};