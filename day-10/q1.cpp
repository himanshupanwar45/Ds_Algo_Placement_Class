/*question : https://leetcode.com/problems/determine-whether-matrix-can-be-obtained-by-rotation/submissions/*/

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<int>> rotate(vector<vector<int>>& mat) {


        for (int i = 0 ; i < mat.size() ; i++) {
            for (int j = i + 1 ; j < mat[0].size() ; j++) {

                swap(mat[i][j], mat[j][i]);
            }
        }

        for (int i = 0 ; i < mat.size() ; i++) {
            int ls = mat[0].size() - 1;
            for (int j = 0 ; j < mat[0].size() / 2; j++) {
                swap(mat[i][j], mat[i][ls--]);
            }
        }

        return mat;
    }



    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {


        int rows = mat.size();
        int columns = mat[0].size();


        for (int j = 0 ; j < 4 ; j++) {

            mat = rotate(mat);

            if (mat == target) return true;
        }

        return false;
    }
};