class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int N = nums.size();
        bool flag = false;
        while(k > N){
            k = k - N;
        }
        if(k != 0 && N != 1 && k != N){
            int l = 0;
            int r = N - k;
            vector<int> v(N);
            for(int i = 0; i < N; i++){
                if(k > 0){
                    v[i] = nums[r];
                    r++;
                    k--;
                }
                else{
                    v[i] = nums[l];
                    l++;
                }
            }
            nums = v;
        }
    }
};
