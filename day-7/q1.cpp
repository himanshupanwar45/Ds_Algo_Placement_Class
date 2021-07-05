/*transpose matric : https://leetcode.com/problems/transpose-matrix/*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {

        vector<vector<int>> temp(matrix[0].size(), vector<int>(matrix.size()));

        for (int i = 0 ; i < matrix.size() ; i++) {
            for (int j = 0 ; j < matrix[0].size() ; j++) {
                temp[j][i] = matrix[i][j];
            }
        }

        return temp;
    }
};