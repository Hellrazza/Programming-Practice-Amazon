//Given an integer array nums, return true if any value appears at
//least twice in the array, and return false if every element is distinct.
#include <iostream>
#include <set>
#include <vector>
using namespace std;

bool checkDuplicates(vector<int> nums) {
	set<int> numSet;
	for (int num : nums) {
		pair<set<int>::iterator, bool>ret = numSet.insert(num);
		if (ret.second == false) {
			return true;
		}
	}
	return false;
}

int main() {
	vector<int> nums = { 1,3,2,1 };
	cout << boolalpha;
	cout << checkDuplicates(nums) << endl;

}