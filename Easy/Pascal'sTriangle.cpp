class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    vector<vector<int>> v(numRows);
    int k = 0;
    for(int i = 0; i < numRows; i++){
        vector<int>v1;
        if(i == 0){
            v1.push_back(1);
            v[k] = v1;
            k++;
            continue;
        }
        int N = v[i - 1].size();
        int l = 0;
        int r = 1;
        for(int j = 0; j < (N + 1); j++){
            if(j == 0)
                v1.push_back(1);
            else if(j == N)
                v1.push_back(1);
            else{
                if(r == N)
                    break;
                int x = v[i - 1][l] + v[i - 1][r];
                v1.push_back(x);
                l++;
                r++;
            }
        }
        v[k] = v1;
        k++;
    }
    return v;
}
};
