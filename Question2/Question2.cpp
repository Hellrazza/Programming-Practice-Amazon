// Given an integer array nums, find the contiguous subarray with the largest sum.
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int MaxSum(vector<int> nums) {
	int res = nums[0];
	int maxEnding = nums[0];

	for (int i = 1; i < nums.size(); i++) {
		maxEnding = max(nums[i], maxEnding + nums[i]);
		res = max(res, maxEnding);
	}
	return res;

}


int main() {
	vector<int> nums = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
	int maxRes = MaxSum(nums);
	cout << maxRes << endl;

}