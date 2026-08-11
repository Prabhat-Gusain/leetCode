class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>result(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            if(i==0)
            {
                result[i]=nums[i];
            }
            else
            {
                result[i]=result[i-1]+nums[i];
            }
        }
        return result;
    }
};