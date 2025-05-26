#include "Output.h"
#include "Solution.h"
#include "CheckResult.h"
#include <iostream>

using namespace std;

void Output::setOutput(vector<int>& nums, vector<int>& expected, int kExpected, int example) {
	setNums(nums);
	setExpected(expected);
	setKExpected(kExpected);
	setExample(example);
}

void Output::printOutput(){
	Solution solution;
	CheckResult checkResult;
	cout << "============ Пример " << _example << " ============" << endl;
	cout << " Входные данные: nums = ";
	printVector(_nums);
	cout << " Ожидаемый результат: k = " << _kExpected << ", nums = ";
	printVector(_expected);
	_k = solution.removeDuplicates(_nums);
	cout << " Фактический результат: k = " << _k << ", nums = ";
	printVector(_nums);
	cout << " ============ проверка ============" << endl;
	if(checkResult.isValid(_k, _kExpected, _nums, _expected)) {
		cout << " Проверка пройдена!" << endl;
	} else {
		cout << " Проверка не пройдена!" << endl;
	}
	cout << "===================================" << endl;
}

void Output::printVector(vector<int>& vec){
	cout << "[ ";
	for (auto& num : vec) {
		cout << num;
		if (&num != &vec.back()) cout << ", ";
	}
	cout << " ]" << endl;
}

void Output::setNums(vector<int>& nums){
	_nums = nums;
}

void Output::setExpected(vector<int>& expected){
	_expected = expected;
}

void Output::setKExpected(int kExpected){
	_kExpected = kExpected;
}

void Output::setExample(int example){
	_example = example;
}
