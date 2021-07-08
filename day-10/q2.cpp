/*question : https://leetcode.com/problems/longest-common-prefix/submissions/*/

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        sort(strs.begin(), strs.end());

        int l1 = strs[0].length();
        int l2 = strs[strs.size() - 1].length();

        int l = min(l1, l2);
        string ans = "";
        int x = 0, y = strs.size() - 1;
        int temp1 = 0, temp2 = 0;
        for (int i = 0 ; i < l ; i++) {

            if (strs[x][temp1] == strs[y][temp2]) {

                ans = ans + strs[x][temp1];
                temp1++;
                temp2++;
            } else break;
        }

        return ans;



    }
};