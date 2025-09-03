class Solution {
 public:
  bool search(vector<int>& nums, int k) {
    int n = nums.size();

    int hi = n - 1;
    int lo = 0;

    while (lo <= hi) {
      int mid = lo + (hi - lo) / 2;

      if (nums[mid] == k)
        return 1;

      if (nums[mid] == nums[hi]) { //! only this line is changed
        hi--;
      }

      else if (nums[mid] < nums[hi]) {  //? sorted from mid to hi
        if (k > nums[mid] and k <= nums[hi])
          lo = mid + 1;
        else
          hi = mid - 1;
      } else {
        if (k >= nums[lo] and k < nums[mid])
          hi = mid - 1;
        else
          lo = mid + 1;
      }
    }
    return 0;
  }
};