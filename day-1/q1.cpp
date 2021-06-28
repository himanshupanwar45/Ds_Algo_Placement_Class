#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;


void solve() {

	int n;
	cin >> n;

	int a[n];

	rep(i, 0, n) {
		cin >> a[i];
	}

	int i = 0, j = 1;

	while ( i < n - 1) {

		if (a[i] != a[i + 1]) {
			a[j] = a[i + 1];
			j++;
		}

		i++;
	}


	rep(i, 0, j) cout << a[i] << " ";


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