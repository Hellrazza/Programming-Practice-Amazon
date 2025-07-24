// Given an array of integers nums and an integer target, 
// return indices of the two numbers such that they add up to target.

#include <unordered_map>
#include <iostream>
using namespace std;

void outputMap(unordered_map<int, int> hashMap) {
	for (const auto& elem : hashMap) {
		cout << elem.first << " " << elem.second << endl;
	}
}

int main() {
	int nums[10] = { 1, 3, 4, 5, 6, 21, 2, 5, 6, 12 };
	int target = 14;

	unordered_map<int, int> hashMap;
	int arrayLength = sizeof(nums) / sizeof(nums[0]);
	for (int i = 0; i < arrayLength; i++) {
		hashMap.insert({ nums[i], i });
	}

	for (const auto& elem : hashMap) {
		int complement = target - elem.first;
		if (hashMap.find(complement) != hashMap.end())
		{
			int foundIndex = hashMap.find(complement)->second;
			cout << "[" << foundIndex << "," << elem.second << "]";
			break;
		}
	}

}