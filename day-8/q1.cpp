/*question : https://leetcode.com/problems/lucky-numbers-in-a-matrix/submissions/*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& a) {

        int rows = a.size();
        int columns = a[0].size();
        vector<int> v;
        int mn = INT_MAX, mx = INT_MIN;
        int k = -1;

        for (int i = 0 ; i < rows ; i++) {
            int mn = INT_MAX, mx = INT_MIN;
            for (int j = 0 ; j < columns ; j++) {
                if (a[i][j] < mn) {
                    mn = a[i][j];
                    k = j;
                }
            }

            for (int x = 0 ; x < rows ; x++) {
                mx = max(mx, a[x][k]);
            }

            if (mn == mx) { v.push_back(mn); break;}


        }

        return v;
    }
};