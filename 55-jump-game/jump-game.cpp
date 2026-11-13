class Solution {
public:
    bool canJump(vector<int>& nums) {
        int mxIndx=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(i>mxIndx)
            {
                return false;
            }
            mxIndx=max(mxIndx,i+nums[i]);
        }
        return true;
    }
};