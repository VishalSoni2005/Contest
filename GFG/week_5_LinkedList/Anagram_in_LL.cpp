//! gfg =>  anagrams in Linked List
//? Two strings are ""anagrams"" if they contain the same characters in the same frequency, but maybe in a different order.
#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  vector<Node*> findAnagrams(Node* head, string s) {
    // code here
    vector<Node*> result;
    if (!head) return result;

    int k = s.size();
    vector<int> target(26, 0), window(26, 0);
    for (char c : s) target[c - 'a']++;

    Node* start = head;
    Node* end = head;
    int count = 0;

    while (end) {
      window[end->data - 'a']++;
      count++;

      if (count == k) {
        if (window == target) {
          result.push_back(start);
          // break the list at end
          Node* nextStart = end->next;
          end->next = NULL;
          start = nextStart;
          end = start;
          count = 0;
          fill(window.begin(), window.end(), 0);
          continue;
        }

        // slide the window
        window[start->data - 'a']--;
        start = start->next;
        count--;
      }
      end = end->next;
    }
    return result;
  }
};

class Solution2 {
 public:
  vector<Node*> findAnagrams(Node* head, string s) {
    vector<Node*> ans;
    if (!head) return ans;

    int k = s.size();
    vector<int> freqS(26, 0);
    for (char c : s) freqS[c - 'a']++;

    Node* start = head;
    Node* end = head;
    vector<int> freq(26, 0);
    int count = 0;  // length of current window

    while (end) {
      freq[end->data - 'a']++;
      count++;

      if (count == k) {
        if (freq == freqS) {
          // ✅ Anagram found: copy nodes
          Node* newHead = new Node(start->data);
          Node* curr = newHead;
          Node* tmp = start->next;
          for (int i = 1; i < k; i++) {
            curr->next = new Node(tmp->data);
            curr = curr->next;
            tmp = tmp->next;
          }
          ans.push_back(newHead);

          // ✅ Move start and end by k (skip overlapping)
          for (int i = 0; i < k; i++) {
            freq[start->data - 'a']--;
            start = start->next;
          }
          end = start;
          count = 0;
          continue;
        } else {
          // ❌ Not an anagram → shrink window from left
          freq[start->data - 'a']--;
          start = start->next;
          count--;
        }
      }
      end = end->next;
    }

    return ans;
  }
};