class Solution {
public:
    int maxVowels(string s, int k) {
        int mx=0;
        int i=0;
        int j=0;
        int vowelCount=0;
        while(j<s.size())
        {
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
            {
                vowelCount++;
            }
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                mx=max(mx,vowelCount);
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                {
                    vowelCount--;
                }
                i++;
                j++;
            }
        }
        return mx;
    }
};