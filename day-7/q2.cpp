/*question : https://leetcode.com/problems/flipping-an-image/submissions/*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {

        vector<vector<int>> temp(image.size(), vector<int>(image[0].size()));
        int rows = image.size();
        int columns = image[0].size();

        for (int i = 0 ; i < rows; i++) {
            int ct = 0;
            for (int j = columns - 1 ; j >= 0; j--) {

                temp[i][ct++] = image[i][j];
            }
        }

        for (int i = 0 ; i < rows ; i++) {
            for (int j = 0 ; j < columns ; j++) {
                temp[i][j] = temp[i][j] ^ 1;
            }
        }

        return temp;
    }
};