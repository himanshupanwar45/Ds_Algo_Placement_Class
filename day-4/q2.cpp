/*question : https://leetcode.com/problems/decompress-run-length-encoded-list/*/

#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define vi vector<int>
#define ll long long int
#define M 1000000007
using namespace std;


string restoreString(string s, vector<int>& indices) {

	char temp[s.length()];
	// string str;

	for (int i = 0 ; i < indices.size() ; i++) {

		temp[indices[i]] = s[i];
	}

	for (int i = 0; i < s.length() ; i++) {
		s[i] = temp[i];
	}

	return s;
}


int main() {

	ios::sync_with_stdio(false);
	cout.tie(NULL);


#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string str = "aaiougrt";
	vector<int> a = {4, 0, 2, 6, 7, 3, 1, 5};

	cout << restoreString(str, a);




	return 0;
}