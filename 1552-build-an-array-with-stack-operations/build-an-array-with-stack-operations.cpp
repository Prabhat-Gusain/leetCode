class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        stack<int>st;
        vector<string>v;
        int j=0;
    
        for(int i=1;i<=n;i++)
        {
            st.push(i);
            v.push_back("Push");   

            
            if(st.top()==target[target.size()-1])
            {
                break;
            }    

            if(target[j]!=i && st.top()!=-1 )
            {
                st.pop();
                v.push_back("Pop");
            }
            
            else
            {
                j++;
            }       
        }
        return v;
    }
};