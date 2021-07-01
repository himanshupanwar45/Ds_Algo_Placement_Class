/*question : https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/*/

#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define vi vector<int>
#define ll long long int
#define M 1000000007
using namespace std;

// O(n^2) solution
void solve() {

	int n;
	cin >> n;

	int a[n];

	rep(i, 0, n) {
		cin >> a[i];
	}

	int count = 0;

	for (int i = 0 ; i < n ; i++) {

		int count = 0;
		for (int j = 0 ; j < n ; j++) {

			if (a[i] > a[j]) count++;
		}

		cout << count << " ";
	}
}

//O(n) solution
void solve1() {

	int n;
	cin >> n;

	int a[n], psum[101];
	int freq[101] = {0};

	rep(i, 0, n) {
		cin >> a[i];
		freq[a[i]]++;
	}

	// cout << "frequency array : " << endl;
	// rep(i, 0, 101) cout << freq[i] << " ";
	// cout << endl;

	psum[0] = freq[0];
	for (int i = 1 ; i < 101 ; i++) {

		psum[i] = psum[i - 1] + freq[i];
	}

	// cout << "psum array : " << endl;
	// rep(i, 0, 101) cout << psum[i] << " " ;
	// cout << endl;

	vi ans;
	for (int i = 0 ; i < n ; i++) {

		ans.push_back(psum[a[i]] - freq[a[i]]);
	}

	for (int x : ans) cout << x << " ";


}


int main() {

	ios::sync_with_stdio(false);
	cout.tie(NULL);

#ifdef senpai_local
	clock_t start = clock();
#endif

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	solve1();

#ifdef senpai_local
	clock_t end = clock();
	double elapsed = double(end - start) / CLOCKS_PER_SEC;
	// printf("Time measured: %.3f seconds.\n", elapsed);
	fprintf(stderr, "%.3f seconds.\n", elapsed);
#endif



	return 0;
}