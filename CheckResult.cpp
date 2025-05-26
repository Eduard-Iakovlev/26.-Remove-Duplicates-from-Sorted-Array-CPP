#include "CheckResult.h"

bool CheckResult::isValid(int k, int kExpected, vector<int>& nums, vector<int>& expected){
	if (k != kExpected) return false;
	if (nums.size() != expected.size()) return false;
	for (int i = 0; i < nums.size(); ++i) {
		if (nums[i] != expected[i]) return false;
	}
	return true;
}
