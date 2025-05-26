#pragma once
#include <vector>

using namespace std;

class Output{
public:
	Output() = default;

	void setOutput(vector<int>& nums, vector<int>& expected, int kExpected, int example);

	void printOutput();
	void printVector(vector<int>& vec);

private:
	vector<int> _nums, _expected;
	int _k, _kExpected, _example;

	void setNums(vector<int>& nums);
	void setExpected(vector<int>& expected);
	void setKExpected(int kExpected);
	void setExample(int example);
};

