class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int goodStringLen=0;
        vector<int> mp(26,0);

        for(char &ch:chars)
        {
            mp[ch-'a']++;
        }

        for(string &s:words)
        {
            vector<int> mp2(26,0);

            for(char &ch:s)
            {
                mp2[ch-'a']++;
            }

            bool flag=true;
            for(int i=0;i<26;i++)
            {
                if(mp2[i]>mp[i])
                {
                    flag=false;
                    break;
                }
            }

            if(flag==true)
            {
                goodStringLen+=s.length();
            }
        }
        return goodStringLen;
        
    }
};