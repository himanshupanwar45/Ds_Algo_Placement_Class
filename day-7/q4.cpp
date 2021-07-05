/*question : https://leetcode.com/problems/flood-fill/*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& china, int sr, int sc, int newColor) {
        int color = china[sr][sc];
        if (color != newColor)
            dfs(china, sr, sc, color, newColor);
        return china;
    }
    void dfs(vector<vector<int>>& china, int i, int j, int color, int newColor) {
        if (china[i][j] == color) {
            china[i][j] = newColor;
            if (i > 0) {
                dfs(china, i - 1, j, color, newColor);
            }
            if (i < china.size() - 1) {
                dfs(china, i + 1, j, color, newColor);
            }
            if (j > 0) {
                dfs(china, i, j - 1, color, newColor);
            }
            if (j < china[0].size() - 1) {
                dfs(china, i, j + 1, color, newColor);
            }
        }
    }
};