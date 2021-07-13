/*question : https://leetcode.com/problems/keyboard-row/*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<string> findWords(vector<string>& words) {
		string s1 = "qwertyuiop";
		string s2 = "asdfghjkl";
		string s3 = "zxcvbnm";

		int lines[26];
		for (int i = 0 ; i < s1.length() ; i++) lines[s1[i] - 'a'] = 1;
		for (int i = 0 ; i < s2.length() ; i++) lines[s2[i] - 'a'] = 2;
		for (int i = 0 ; i < s3.length() ; i++) lines[s3[i] - 'a'] = 3;

		vector<string> ans;
		for (int i = 0 ; i < words.size() ; i++) {

			int l = words[i].length();
			string x(l, '*');
			for (int k = 0 ; k < words[i].length() ; k++) {
				x[k] = tolower(words[i][k]);
			}
			char temp = x[0];
			bool flag = false;
			for (int j = 1 ; j < x.length() ; j++) {
				if (lines[temp - 'a'] != lines[x[j] - 'a']) flag = true;

			}


			if (!flag) ans.push_back(words[i]);

		}

		return ans;

	}
};
