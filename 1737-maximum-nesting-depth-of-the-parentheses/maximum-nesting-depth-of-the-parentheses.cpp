class Solution {
public:
    int maxDepth(string s) {
        stack<char>stk;
        int count=0;
        int maxCount=0;
        for(int i=0;i<s.size();i++)
        {
           if(s[i]=='(')
           {
                count++;
                stk.push(s[i]);
           } 
           else if(s[i]==')')
           {
                count--;
                stk.pop();
           }
            maxCount=max(maxCount,count);
        }
        return maxCount;
    }
};