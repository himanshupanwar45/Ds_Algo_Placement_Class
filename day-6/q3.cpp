/*question : https://leetcode.com/problems/island-perimeter/*/

#include <iostream>
#include <vector>
#define debug(x) cout << #x << " " << x << endl;
using namespace std;

bool isValid(int x, int y, vector<vector<int>> &arr)
{

  if (x >= 0 && x <= arr.size() - 1 && y >= 0 && y <= arr[0].size() - 1 && arr[x][y] == 1)
    return true;

  return false;
}

int solve(int x, int y, vector<vector<int>> &grid)
{

  int count = 0;

  int dx[4] = { -1, 1, 0, 0};
  int dy[4] = {0, 0, 1, -1};
  for (int i = 0; i < 4; i++)
  {
    if (isValid(x + dx[i], y + dy[i], grid))
      count++;
  }

  return count;
}

int islandPerimeter(vector<vector<int>> &grid)
{

  int ans = 0;
  int rows = grid.size();
  int columns = grid[0].size();

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {

      if (grid[i][j] == 1)
      {
        ans += (4 - solve(i, j, grid));
      }
    }
  }

  return ans;
}

int main()
{

  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  vector<vector<int>> grid = {{0, 1, 0, 0}, {1, 1, 1, 0}, {0, 1, 0, 0}, {1, 1, 0, 0}};

  cout << islandPerimeter(grid);
}