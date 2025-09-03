class Solution {
 public:
  int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> lastIndex;  // stores last index of each char
    int maxLength = 0;
    int start = 0;

    for (int end = 0; end < s.size(); end++) {
      char c = s[end];

      // if character seen before, move start pointer
      if (lastIndex.find(c) != lastIndex.end()) {
        start = max(start, lastIndex[c] + 1);
      }

      lastIndex[c] = end;  // update last seen index
      maxLength = max(maxLength, end - start + 1);
    }

    return maxLength;
  }
};
