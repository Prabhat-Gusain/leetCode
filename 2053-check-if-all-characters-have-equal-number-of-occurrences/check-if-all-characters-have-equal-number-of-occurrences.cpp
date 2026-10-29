class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int>HashTable(26,0);

        for(int i=0;i<s.size();i++)
        {
            HashTable[s[i]-'a']++;
        }

        int count=0;

        for(int i=0;i<26;i++)
        {
            if(HashTable[i]!=0)
            {
                if(count==0)
                {
                    count=HashTable[i];
                }
                else if(HashTable[i]!=count)
                {
                    return false;
                }
            }
        }
        return true;
    }
};