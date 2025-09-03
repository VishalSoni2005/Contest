# 🔀 Rotated Sorted Array Variants – Practice Set

This collection contains different **variants** of the classic **Search in Rotated Sorted Array** problem, often asked in FAANG and top product company interviews.

---

## 📌 Problems

### 1. Search in Rotated Sorted Array II (With Duplicates)

- Given a rotated sorted array that may contain **duplicates**, return `true` if the target exists, otherwise `false`.
- **Key Challenge:** Handling duplicates when `arr[mid] == arr[left] == arr[right]`.
- **LeetCode:** [#81](https://leetcode.com/problems/search-in-rotated-sorted-array-ii/)
- **Difficulty:** Medium

---

### 2. Find Minimum in Rotated Sorted Array

- Find the **minimum element** in a rotated sorted array with unique elements.
- **Key Idea:** Binary search comparing `arr[mid]` and `arr[right]`.
- **LeetCode:** [#153](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/)
- **Difficulty:** Medium

---

### 3. Find Minimum in Rotated Sorted Array II (With Duplicates)

- Same as above but the array may contain **duplicates**.
- **LeetCode:** [#154](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/)
- **Difficulty:** Hard

---

### 4. Count Rotations in Rotated Sorted Array

- Given a rotated sorted array, return the **index of the minimum element**, i.e., the number of times the array has been rotated.
- **Example:** `[15, 18, 2, 3, 6, 12]` → Rotated `2` times.
- **Difficulty:** Medium

---

### 5. Find Target Range in Rotated Sorted Array

- Return the **first and last occurrence** of a target element in a rotated sorted array.
- **Pattern:** Combination of "Search in Rotated Sorted Array" + "Search Range".
- **Difficulty:** Hard

---

### 6. Find Peak in Rotated Sorted Array

- Find the **maximum element** (peak) in a rotated sorted array.
- **Example:** `[4, 5, 6, 7, 0, 1, 2]` → Peak is `7`.
- **Difficulty:** Medium

---

## 🏢 Company Tags

- **Amazon, Google, Microsoft** → Variants with duplicates (#81, #154).
- **Flipkart, Samsung, Service-based companies** → Count rotations & Peak finding.

---

## ⏳ Recommended Practice Flow

1. Start with **classic search** (#33).
2. Move to **duplicates** (#81).
3. Solve **min element** (#153 & #154).
4. Try **rotation count & peak finding**.
5. Challenge yourself with **target range** in rotated array.

---

✨ Happy Coding & Keep Grinding 🚀
