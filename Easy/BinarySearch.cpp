class Solution {
public:
    int binary(vector<int>& nums, int l, int r, int target){
        if(l > r)
            return -1;
        int mid = (l+r)/2;
        if(nums[mid] == target)
            return mid;
        else if(nums[mid] < target)
            return binary(nums, mid + 1, r, target);
        else
            return binary(nums, l, mid - 1, target);
    }
    int search(vector<int>& nums, int target) {
        int N = nums.size();
        int l = 0;
        int r = N - 1;
       
        int result = binary(nums, l, r, target);
        return result;
    }
};
