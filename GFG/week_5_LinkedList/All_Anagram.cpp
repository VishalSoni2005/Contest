//! two string is given find all possible anagram

#include <bits/stdc++.h>
using namespace std;

vector<string> findAnagrams(const string& chars, const string& s) {
  vector<string> ans;
  int n = chars.size();
  int k = s.size();

  // frequency map of target string
  map<char, int> freqS;
  for (char c : s) freqS[c]++;

  // sliding window map
  map<char, int> freq;

  for (int i = 0; i < n; i++) {
    freq[chars[i]]++;  // add current char

    if (i >= k) {
      // remove leftmost char
      char left = chars[i - k];
      freq[left]--;
      if (freq[left] == 0) freq.erase(left);
    }

    // compare two maps
    if (i >= k - 1 && freq == freqS) {
      ans.push_back(chars.substr(i - k + 1, k));
    }
  }

  return ans;
}
