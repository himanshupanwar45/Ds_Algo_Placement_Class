/*question : https://leetcode.com/problems/sum-of-all-subset-xor-totals/submissions/*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  int subsetXORSum(vector<int>& arr) {

    if (arr.size() == 0) return 0;

    int total_sum = 0;

    int n = arr.size();
    int subset_ct = (1 << n);

    for (int i = 0 ; i < subset_ct ; i++) {

      // vector<int> subset;
      int temp = 0, sum = 0;
      for (int j = 0 ; j < n ; j++) {


        if (i & (1 << j)) temp = arr[j] ^ temp;
        // sum+=temp;
      }

      total_sum += temp;
    }

    return total_sum;
  }
};