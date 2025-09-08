#include <bits/stdc++.h>
using namespace std;

struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
 public:
  int maxDoubletXOR(ListNode* head) {
    vector<int> arr;
    while (head) {
      arr.push_back(head->val);
      head = head->next;
    }
    int n = arr.size();
    int maxXor = 0;
    for (int i = 0; i < n / 2; i++) {
      int x = arr[i] ^ arr[n - 1 - i];
      maxXor = max(maxXor, x);
    }
    return maxXor;
  }
};
