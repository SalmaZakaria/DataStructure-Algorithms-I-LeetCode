class Solution {
public:
    void moveZeroes(vector<int>& nums) {
	for (int i = 0; i < nums.size(); i++)
	{
		int j = i;
		if (nums[i] == 0 && i != nums.size() - 1) {
			while (j != nums.size() - 1 && nums[j + 1] == 0)
			{
				j++;
			}
			if (j != nums.size() - 1)
				swap(nums[i], nums[j + 1]);
		}
	}
}
};
