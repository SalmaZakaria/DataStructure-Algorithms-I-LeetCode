class Solution {
public:
    vector<vector<int>> ALL;
    void combination(int start, vector<int> comb, int n, int k){
        if(comb.size() == k){
            ALL.push_back(comb);
            return;
        }
        
        for(int i = start; i <= n; i++){
            comb.push_back(i);
            combination(i + 1, comb, n, k);
            comb.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> v;
        
        combination(1, v, n, k);
        return ALL;
    }
};
