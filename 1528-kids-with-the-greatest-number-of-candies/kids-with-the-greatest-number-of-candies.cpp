class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx=0;
        int n=candies.size();
        for(int i=0;i<n;i++)
        {
            mx=max(mx,candies[i]);
        }

        vector<bool>ans(n);
        for(int i=0;i<n;i++)
        {
            if((candies[i]+extraCandies)>=mx)
            {
                ans[i]=true;
            }
            else
            {
                ans[i]=false;
            }
        }
        return ans;
    }
};