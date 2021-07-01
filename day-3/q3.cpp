#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define vi vector<int>
#define ll long long int
#define M 1000000007
using namespace std;


vector<bool> fun(int a[], int n, int extraT) {

	int maxx = -1;
	vector<bool> v;

	for (int i = 0; i < n; i++) {
		maxx = max(a[i], maxx);
	}



	for (int i = 0 ; i < n ; i++) {

		if (extraT + a[i] >= maxx) v.push_back(true);
		else v.push_back(false);
	}

	return v;
}


int main() {

	ios::sync_with_stdio(false);
	cout.tie(NULL);


#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	vector<bool> ans;
	int n, extraT;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++) cin >> a[i];

	cin >> extraT;

	ans = fun(a, n, extraT);

	for (int x : ans) x ? cout << "true" << endl : cout << "false" << endl;




	return 0;
}