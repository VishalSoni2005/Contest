class Solution {
 public:
  bool isPalindrome(string s) {
    int n = s.length();
    if (n == 1)
      return 1;

    int i = 0;
    int j = n - 1;
    bool flag = false;

    while (i <= j) {
      if (!isalnum(s[i])) {
        i++;
        continue;
      }
      if (!isalnum(s[j])) {
        j--;
        continue;
      }

      if (tolower(s[i]) == tolower(s[j])) {
        i++;
        j--;
        continue;
      } else
        return false;
    }
    return true;
  }
};