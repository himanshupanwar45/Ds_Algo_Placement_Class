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

	cin >> key;

	int x = 0;
	int y = n - 1;

	while (x < y) {

		if (a[x] == key) swap(a[x], a[y]) , y--;
		else x++;
	}

	rep(i, 0, x + 1) cout << a[i] << " ";


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