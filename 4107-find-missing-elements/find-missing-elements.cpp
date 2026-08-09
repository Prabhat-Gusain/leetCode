class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int low=nums[0];
        int high=nums[0];
        vector<int>result;

        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                low=min(low,nums[i+1]);
            }
            else if(nums[i]<nums[i+1])
            {
                high=max(high,nums[i+1]);
            }
        }

        vector<int>missing(high+1,0);

        for(int i=0;i<nums.size();i++)
        {
            missing[nums[i]]++;
        } 

        for(int i=low;i<high;i++)
        {
            if(missing[i]==0)
            {
                result.push_back(i);
            }
        }
        return result;
    }
};