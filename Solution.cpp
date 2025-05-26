#include "Solution.h"

int Solution::removeDuplicates(vector<int>& nums){
	if (nums.size() <= 1) return nums.size();

	int count = 0;
	while (count < nums.size() - 1) {
		if(nums[count] != nums[count + 1]) {
			count++;
		}
		else {
			nums.erase(nums.begin() + count + 1);
		}
	}
	return nums.size();
}
