/*question : https://leetcode.com/problems/peak-index-in-a-mountain-array/submissions/*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        if (arr.size() == 0) return 0;
        int n = arr.size();

        int start = 0, end = n - 1;
        int ans = 0;
        while (start < end) {

            int mid = start + (end - start) / 2;

            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
                ans = mid;
                break;
            }
            if (arr[mid] > arr[mid - 1] && arr[mid] < arr[mid + 1]) {
                start = mid + 1;
            }
            else end = mid;
        }

        return ans;
    }
};