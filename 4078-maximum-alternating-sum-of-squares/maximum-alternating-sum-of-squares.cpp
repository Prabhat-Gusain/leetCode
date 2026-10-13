class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>square(n);

        for(int i=0;i<n;i++)
        {
            square[i]=nums[i]*nums[i];
        }

        long long score=0;
        
        sort(square.begin(),square.end());

        for(int i=0;i<n/2;i++)
        {
            score=score-square[i];
        }

        for(int i=n/2;i<n;i++)
        {
            score=score+square[i];
        }

        return score;
    }
};