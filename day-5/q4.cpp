/*question : https://leetcode.com/problems/height-checker/submissions/*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {

        vector<int> expected(heights);

        int ct = 0;
        sort(expected.begin(), expected.end());

        for (int i = 0 ; i < heights.size(); i++) {

            if (heights[i] != expected[i]) ct++;
        }

        return ct;
    }
};