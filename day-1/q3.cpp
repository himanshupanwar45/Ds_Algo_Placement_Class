#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;


void solve() {

	int n, key;
	cin >> n;

	int a[n];

	rep(i, 0, n) {
		cin >> a[i];
	}

	int a2[n];

	int start = 0;
	int mid = n / 2;

	for (int i = 0 ; i < n ; i++) {

		if (i % 2 == 0 ) a2[i] = a[start++];
		else a2[i] = a[mid++];
	}

	rep(i, 0, n) cout << a2[i] << " ";
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