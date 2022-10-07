bool ispar(string s)
    {
        // Your code here
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if((s[i]==')' || s[i]==']' || s[i]=='}') && st.empty())
            {
                // cout<<"if1";
                return false;
            }
            else if(s[i]=='(' || s[i]=='[' || s[i]=='{')
                st.push(s[i]);
            else
            {
                if(s[i]==')' && st.top()=='(')
                    st.pop();
                else if(s[i]=='}' && st.top()=='{')
                    st.pop();
                else if(s[i]==']' && st.top()=='[')
                    st.pop();
                else{
                    return false;}
            }
        }
        if(st.empty())
            return true;
        // cout<<"end";
        return false;
    }