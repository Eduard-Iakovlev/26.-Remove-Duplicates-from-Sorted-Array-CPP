#include <iostream>
#include <vector>
#include "Output.h"

using namespace std;

int main(){
    setlocale(LC_ALL, "RUS");
    
    vector<int> nums, expected;
    int k;
    int example = 0;

    Output output;

    example++;
    nums = { 1,1,2 };
	expected = { 1,2 };
    k = 2;
	output.setOutput(nums, expected, k, example);
    output.printOutput();
 
    example++;
    nums = { 0,0,1,1,1,2,2,3,3,4 };
	expected = { 0,1,2,3,4 };
    k = 5;
	output.setOutput(nums, expected, k, example);
    output.printOutput();
 

}
