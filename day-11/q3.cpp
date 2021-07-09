/*question : https://leetcode.com/problems/add-binary/ */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string a, b;
    cin >> a >> b;
    string s = "";
    int carry = 0, i = a.size() - 1, j = b.size() - 1;
    while (i >= 0 || j >= 0)
    {
        int sum = carry;
        if (i >= 0)
            sum += a.at(i--) - '0';
        if (j >= 0)
            sum += b.at(j--) - '0';
        string temp = to_string(sum % 2);
        s.insert(0, temp);
        carry = sum / 2;
    }
    if (carry > 0)
        s.insert(0, "1");

    cout << s;
    return 0;
}