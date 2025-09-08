class Solution {
 public:
  vector<int> leftSmaller(vector<int> arr) {
    // code here

    stack<int> st;
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++) {
      while (not st.empty() and st.top() >= arr[i]) st.pop();

      if (st.size() == 0)
        ans.push_back(-1);

      else
        ans.push_back(st.top());

      st.push(arr[i]);
    }
    return ans;
  }
};