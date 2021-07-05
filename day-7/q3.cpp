/*question : https://leetcode.com/problems/toeplitz-matrix/submissions/*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {

        int rows = matrix.size();
        int columns = matrix[0].size();

        for (int i = 0 ; i < rows - 1 ; i++) {
            for (int j = 0 ; j < columns - 1 ; j++) {

                if (matrix[i + 1][j + 1] != matrix[i][j]) return false;
            }
        }

        return true;
    }
};