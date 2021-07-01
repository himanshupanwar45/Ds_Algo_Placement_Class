#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define vi vector<int>
#define ll long long int
#define M 1000000007
using namespace std;


int findGood(int a[], int n) {

	int good = 0;
	for (int i = 0 ; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] == a[j]) good++;
		}
	}

	return good;
}

int main() {

	ios::sync_with_stdio(false);
	cout.tie(NULL);


#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	int a[n];

	rep(i, 0, n) cin >> a[i];

	cout << "good pairs : " << findGood(a, n);




	return 0;
}