/*question : https://leetcode.com/problems/shortest-distance-to-a-character/*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> shortestToChar(string s, char c) {

		vector<int> ans(s.length());

		vector<int> temp;
		for (int i = 0 ; i < s.length() ; i++) {
			if (s[i] == c) temp.push_back(i);
		}

		for (int i = 0 ; i < s.length() ; i++) {
			int mn = INT_MAX;
			for (int j = 0 ; j < temp.size() ; j++) {
				int dis = abs(i - temp[j]);
				if (dis < mn) mn = dis;
				else break;
			}
			ans[i] = mn;
		}

		return ans;
	}
};