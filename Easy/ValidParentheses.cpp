class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int N = s.length();
        int flag = false;
        for(int i = 0; i < N; i++){
            if(i == 1 && st.empty() == true)
                return false;
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
                flag = true;
            }
            else if(s[i] == ')' && st.empty() != true){
                char c = st.top();
                if(c == '(')
                    st.pop();
                else
                    return false;
            }
            else if(s[i] == ']' && st.empty() != true){
                char c = st.top();
                if(c == '[')
                    st.pop();
                else
                    return false;
            }
            else if(s[i] == '}' && st.empty() != true){
                char c = st.top();
                if(c == '{')
                    st.pop();
                else
                    return false;
            }
            else
                return false;
        }
        if(st.empty() && flag == true)
            return true;
        else
            return false;
    }
};
