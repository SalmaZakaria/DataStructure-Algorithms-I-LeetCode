class Solution {
public:
    bool isAnagram(string s, string t) {
        int N1 = s.length();
        int N2 = t.length();
        if(N1 != N2)
            return false;
        
        map<char, int> M1;
        map<char, int> M2;
        map<char, int>:: iterator it;
        bool flag = false;
        for(int i = 0; i < N1; i++){
            M1[s[i]]++;
        }
        for(int i = 0; i < N2; i++){
            M2[t[i]]++;
        }
        for(it = M1.begin(); it != M1.end(); it++){
            if(M2.find(it->first) == M2.end())
                return false;
            if(M1[it->first] != M2[it->first])
                return false;
        }
        return true;
    }
};
