class Solution {
public:
    int isOperand(string x)
    {
        if(x=="+" || x=="-" || x=="*" || x=="/")
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }

    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int i,x1,x2,r;

        for(i=0;i<tokens.size();i++)
        {
            if(isOperand(tokens[i]))
            {
                st.push(stoi(tokens[i]));
            }
            else
            {
                x2=st.top();
                st.pop();
                x1=st.top();
                st.pop();

                switch(tokens[i][0])
                {
                    case '+':
                        r=x1+x2;
                        st.push(r);
                        break;
                    case '-':
                        r=x1-x2;
                        st.push(r);
                        break;
                    case '*':
                        r=x1*x2;
                        st.push(r);
                        break;
                    case '/':
                        r=x1/x2;
                        st.push(r);
                        break;
                }
            }
        }
        return st.top();
    }
};