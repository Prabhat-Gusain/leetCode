class Solution {
public:
    string clearDigits(string s) {
        stack<char>st;
        string result;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>=97 && s[i]<=122)
            {
                st.push(s[i]);
            }
            else
            {
                st.pop();
            }
        }
        while(!st.empty())
        {
            result+=st.top();
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};