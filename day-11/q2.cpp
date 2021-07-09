/*question : https://leetcode.com/problems/valid-parentheses/*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    char pair(char c)
    {

        if (c == ')')
            return '(';
        if (c == '}')
            return '{';
        return '[';
    }
    bool isValid(string s)
    {

        stack<int> st;
        for (int i = 0; i < s.length(); i++)
        {

            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                st.push(s[i]);
            }
            else
            {
                if (st.empty())
                    return false;
                char temp = st.top();
                if (pair(s[i]) == temp)
                    st.pop();
                else
                    return false;
            }
        }

        if (st.empty())
            return true;
        return false;
    }
};