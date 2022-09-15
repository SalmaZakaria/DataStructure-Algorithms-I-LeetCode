class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maximum = 0;
        int maxSub = nums[0];
        int N = nums.size();
        for(int i = 0; i < N; i++){
            if(maximum < 0)
                maximum = 0;
            maximum += nums[i];
            maxSub = max(maximum, maxSub);
        }
        return maxSub;
    }
};
