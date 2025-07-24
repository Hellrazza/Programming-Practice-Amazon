// Given two strings s and t, return true if t is an anagram of s, and false otherwise.
#include <string>
#include <unordered_map>
#include <iostream>
using namespace std;

void outputMap(unordered_map<char, int> hashMap) {
	for (const auto& elem : hashMap) {
		cout << elem.first << endl;
	}
}

bool isAnagram(string string1, string string2) {
	if (string1.length() != string2.length()) {
		return false;
	}

	unordered_map<char, int>anagramMap;
	for (int i = 0; i < string1.length(); i++) {
		anagramMap.emplace(string1[i], i);
	}

	for (char c : string2) {
		if (anagramMap.find(c) != anagramMap.end()) {
			anagramMap.erase(c);
		}
	}

	if (anagramMap.empty()) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	string string1 = "listen";
	string string2 = "silent";
	cout << boolalpha;
	cout << isAnagram(string1, string2) << endl;
}