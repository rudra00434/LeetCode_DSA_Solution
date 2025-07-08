class Solution {
    stack<char> st;
public:
    bool isValid(string s) {
        for(auto it: s)
        {
            if(it=='(' || it =='[' || it=='{')
            {
                st.push(it);
            }
            else
            {
                if(st.size()==NULL) return false;
                char ch=st.top();
                st.pop();
                if( (it==')' && ch=='(') || (it=='}' && ch=='{') || (it==']' && ch=='[') )
                {
                    continue;
                }
                else
                return false;
            }
        }
        return st.empty();
    }

};