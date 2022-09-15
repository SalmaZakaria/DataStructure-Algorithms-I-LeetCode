class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int N = nums.size();
        vector<int> indices;
        for(int i = 0; i < N - 1; i++){
            for(int j = i + 1; j < N; j++){
                if(nums[i] + nums[j] == target){
                    indices.push_back(i);
                    indices.push_back(j);
                }
            } 

        }
        return indices;
    }
};
