/*question : https://leetcode.com/problems/range-sum-query-immutable/*/

#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define vi vector<int>
#define ll long long int
#define M 1000000007
using namespace std;


void solve() {

	int n;
	cin >> n;

	int a[n];

	rep(i, 0, n) {
		cin >> a[i];
	}

	int psum[n];
	psum[0] = a[0];

	for (int i = 1 ; i < n; i++) {

		psum[i] = psum[i - 1] + a[i];
	}

	// rep(i, 0, n) cout << psum[i] << endl;
	int left, right;
	cin >> left >> right;

	if (left == 0)
		cout << psum[right];
	else
		cout << psum[right] - psum[left - 1];
}


int main() {

	ios::sync_with_stdio(false);
	cout.tie(NULL);


#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	solve();




	return 0;
}