/*question : https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int binarySearch(int left, int right, vector<vector<int>>& a, int rn) {
        int ans = a[0].size();
        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (a[rn][mid] < 0) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return ans;
    }

    int countNegatives(vector<vector<int>>& a) {

        int rows = a.size();
        int columns = a[0].size();

        int count = 0;

        for (int i = 0 ; i < rows ; i++) {

            int temp = binarySearch(0, columns - 1, a, i);
            count += (columns - temp);
        }

        return count;
    }
};