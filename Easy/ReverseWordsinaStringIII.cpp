class Solution {
public:
    string reverseWords(string s) {
        int N = s.length();
        vector<string>v;
        string st = "";
        for(int i = 0; i < N; i++){
            if(s[i] == ' ' || i == N - 1){
                if(i == N - 1){
                    st.push_back(s[i]);
                    v.push_back(st);
                    continue;
                }
                v.push_back(st);
                v.push_back(" ");
                st = "";
                continue;
            }
            st.push_back(s[i]);
        }
        int Vsize = v.size();
        string NewS = "";
        for(int i = 0; i < Vsize; i++){
            reverse(v[i].begin(), v[i].end());
            NewS += v[i];
        }
        return NewS;
    }
};
