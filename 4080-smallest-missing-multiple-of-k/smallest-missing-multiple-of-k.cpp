class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        // int limit=k*(nums.size()+1);
        vector<int>hash(10000,0);
        for(int i=0;i<nums.size();i++)
        {
            hash[nums[i]]++;
        }

        for(int i=1;i<hash.size();i++)
        {
            if(i%k==0 && hash[i]==0)
            {
                return i;
            }
        }
        return 0;
    }
};