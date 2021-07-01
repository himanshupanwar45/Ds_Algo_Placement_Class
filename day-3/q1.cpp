#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define vi vector<int>
#define ll long long int
#define M 1000000007
using namespace std;


int solve(vector<vector<int>>& acc) {

	int n = acc.size();
	int m = acc[1].size();
	int sum, maxx = -1, ans = -1;
	for (int i = 0 ; i < n; i++) {
		sum = 0 ;
		for (int j = 0; j < m; j++) {
			sum += acc[i][j];
		}

		if (sum > maxx) ans = i + 1;
		maxx = max(maxx, sum);

	}


	return sum;
}


int main() {

	ios::sync_with_stdio(false);
	cout.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, m;
	cin >> n >> m;

	vector<vector<int>> a(n, vector<int>(m));
	rep(i, 0, n) {
		rep(j, 0, m) {
			cin >> a[i][j];
		}
	}

	cout << solve(a);


	return 0;
}