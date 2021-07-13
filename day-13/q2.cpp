/*question : https://leetcode.com/problems/most-common-word/*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	string mostCommonWord(string paragraph, vector<string>& banned) {

		transform(paragraph.begin(), paragraph.end(), paragraph.begin(), ::tolower);
		for (int i = 0 ; i < paragraph.length() ; i++) {
			if (!isalpha(paragraph[i])) paragraph[i] = ' ';
		}

		// vector<string> s;
		stringstream ss(paragraph);

		string word;
		map<string, int> mp;

		while (ss >> word) {
			mp[word]++;
		}

		for (int i = 0 ; i < banned.size() ; i++) {
			mp.erase(banned[i]);
		}

		int mx = INT_MIN;
		string temp;
		for (auto x : mp) {
			if (x.second > mx) mx = x.second, temp = x.first;
		}

		return temp;

	}
};