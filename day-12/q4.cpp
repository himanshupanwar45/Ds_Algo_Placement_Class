/*question : https://leetcode.com/problems/reverse-vowels-of-a-string*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isVowel(char c)
    {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';

        return false;
    }

    string reverseVowels(string s)
    {
        vector<int> v;
        for (int i = 0; i < s.length(); i++)
        {

            if (isVowel(s[i]))
            {
                v.push_back(s[i]);
            }
        }

        reverse(v.begin(), v.end());

        int x = 0;
        for (int i = 0; i < s.length(); i++)
        {

            if (isVowel(s[i]))
            {
                s[i] = v[x++];
            }
        }

        return s;
    }
};