#pragma once
#include <vector>

using namespace std;

class CheckResult{
public:
	CheckResult() = default;
	bool isValid(int k, int kExpected, vector<int>& nums, vector<int>& expected);
};

