class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            int mod=nums[i]%3;
            if(mod==0)
            {
                continue;
            }
            else if(mod==1)
            {
                nums[i]-=1;
                count++;
            }
            else if(mod==2)
            {
                nums[i]+=1;
                count++;
            }
        }
        return count;
    }
};