class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string ans="";
        int n=s.size();
        for(int i=0;i<s.size();i++)
        {
            int count=0;
            for(int j=i;j<s.size();j++)
            {
                if(s[j]=='1')
                {
                    count++;
                }
                if(count==k)
                {
                    string current=s.substr(i,j-i+1);
                    if(ans.empty()||(current.size()<ans.size())||(current.size()==ans.size()&&current<ans))
                    {
                        ans=current;
                    }
                    break;
                }
                
            }
        }
        return ans;
    }
};