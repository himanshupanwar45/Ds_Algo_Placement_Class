/*question : https://leetcode.com/problems/unique-morse-code-words/*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  int uniqueMorseRepresentations(vector<string>& words) {

    string st[26] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};

    set<string> ss;
    for (auto x : words) {
      string s = "";
      for (auto y : x) {
        s.append(st[y - 'a']);
      }

      ss.insert(s);
    }

    return ss.size();


  }
};