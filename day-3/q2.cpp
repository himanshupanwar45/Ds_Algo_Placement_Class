#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define vi vector<int>
#define ll long long int
#define M 1000000007
using namespace std;


void solve(map<int, int>& mp, int size, int *arr) {

	for (int i = 0 ; i < size; ++i) {

		if (mp.find(arr[i]) != mp.end()) {

			mp[arr[i]]++;
		}
	}
}

void insertMap(map<int, int>& mp, int size, int *arr) {

	for (int i = 0; i < size ; i++) {

		mp.insert({arr[i], 0});
	}
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

	int a1[n], a2[m];

	rep(i, 0, n) cin >> a1[i];
	rep(i, 0, m) cin >> a2[i];

	map<int, int> mp;

	n > m ? insertMap(mp, n, a1) : insertMap(mp, m, a2);

	n > m ? solve(mp, m, a2) : solve(mp, n, a1);


	cout << "Intersections : " << endl;

	for (auto x : mp) {

		if (x.second == 1) cout << x.first << " ";
	}







	return 0;
}