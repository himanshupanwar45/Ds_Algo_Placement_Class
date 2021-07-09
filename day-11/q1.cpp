/*question : https://leetcode.com/problems/roman-to-integer/submissions/*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int helper(char c)
    {

        if (c == 'I')
            return 1;
        if (c == 'V')
            return 5;
        if (c == 'X')
            return 10;
        if (c == 'L')
            return 50;
        if (c == 'C')
            return 100;
        if (c == 'D')
            return 500;
        if (c == 'M')
            return 1000;
        return 0;
    }

    int romanToInt(string s)
    {

        int ans = 0;
        for (int i = 0; i < s.length(); i++)
        {

            // if(helper(s[i])==helper(s[i+1])) ans+=(helper(s[i]));

            if (helper(s[i]) < helper(s[i + 1]))
            {
                ans += (helper(s[i + 1]) - helper(s[i]));
                i++;
            }

            else
            {
                ans += (helper(s[i]));
            }
        }

        return ans;
    }
};