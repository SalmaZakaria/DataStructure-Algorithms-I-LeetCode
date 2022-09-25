class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int N1 = ransomNote.length();
        int N2 = magazine.length();
        if(N1 > N2)
            return false;
        
        map<char, int>M;
        map<char, int>M2;
        for(int i = 0; i < N1; i++){
            if(M.find(ransomNote[i]) == M.end())
                M.insert({ransomNote[i], 1});
            else
                M[ransomNote[i]]++;
        }
        for(int i = 0; i < N2; i++){
            if(M2.find(magazine[i]) == M2.end())
                M2.insert({magazine[i], 1});
            else
                M2[magazine[i]]++;
        }
        for(int i = 0; i < N1; i++){
            if(M2.find(ransomNote[i]) == M2.end())
                return false;
            else if(M[ransomNote[i]] > M2[ransomNote[i]])
                return false;
        }
        return true;
    }
};
