/*question : https://leetcode.com/problems/decompress-run-length-encoded-list/
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> decompressRLElist(vector<int>& nums) {

		if (nums.size() == 0) return nums;

		vector<int> ans;

		for (int i = 0 ; i < nums.size() - 1 ; i += 2) {

			int temp = nums[i];
			while (temp--) {
				ans.push_back(nums[i + 1]);
			}
		}

		return ans;
	}
};