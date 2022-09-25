class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int>m;        
        int N = s.length();
        for(int i = 0; i < N; i++){
            if(m.find(s[i]) == m.end())
                m.insert({s[i], 1});
            else
                m[s[i]]++;
        }
        for(int i = 0; i < N; i++){
            if(m[s[i]] == 1)
                return i;
        }
        return -1;
    }
};
