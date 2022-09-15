class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, bool> mymap;
        int N = nums.size();
        for(int i = 0; i < N; i++){
            if(mymap.find(nums[i]) == mymap.end())
                mymap.insert({nums[i], true});
            else
                return true;
        }
        return false;
    }
};
