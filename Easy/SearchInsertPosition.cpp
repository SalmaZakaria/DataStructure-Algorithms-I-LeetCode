class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int N = nums.size();
       int index = 0;
       for(int i = 0; i < N; i++){
           if(nums[i] >= target){
               index = i;
               break;
           }
           else if(i == N - 1 && nums[i] < target){
               index = i + 1;
           }
           
       }
        return index;
    }
};
