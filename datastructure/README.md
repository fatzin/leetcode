# Data Structures I - Leetcode

Coding problems from Data Structure study plan available on LeetCode


# Valid Palindrome

A phrase is a  **palindrome**  if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string  `s`, return  `true` _if it is a  **palindrome**, or_ `false` _otherwise_.
**Example 1**
**Input:** s = "A man, a plan, a canal: Panama"
**Output:** true
**Explanation:** "amanaplanacanalpanama" is a palindrome.

**Example 2**
**Input:** s = "race a car"
**Output:** false
**Explanation:** "raceacar" is not a palindrome.

# Contains Duplicate

Given an integer array `nums`, return `true` if any value appears **at least twice** in the array, and return `false` if every element is distinct.

**Example 1:**

**Input:** nums = [1,2,3,1]
**Output:** true

# Maximum Subarray

Given an integer array  `nums`, find the subarray with the largest sum, and return  _its sum_.

**Example 1:**

**Input:** nums = [-2,1,-3,4,-1,2,1,-5,4]
**Output:** 6
**Explanation:** The subarray [4,-1,2,1] has the largest sum 6.

**Example 2:**

**Input:** nums = [1]
**Output:** 1
**Explanation:** The subarray [1] has the largest sum 1.
#

# Merge Sorted Array

You are given two integer arrays  `nums1`  and  `nums2`, sorted in  **non-decreasing order**, and two integers  `m`  and  `n`, representing the number of elements in  `nums1`  and  `nums2`  respectively.

**Merge**  `nums1`  and  `nums2`  into a single array sorted in  **non-decreasing order**.

The final sorted array should not be returned by the function, but instead be  _stored inside the array_ `nums1`. To accommodate this,  `nums1`  has a length of  `m + n`, where the first  `m`  elements denote the elements that should be merged, and the last  `n`  elements are set to  `0`  and should be ignored.  `nums2`  has a length of  `n`.

**Example 1:**

**Input:** nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
**Output:** [1,2,2,3,5,6]
**Explanation:** The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

**Example 2:**

**Input:** nums1 = [1], m = 1, nums2 = [], n = 0
**Output:** [1]
**Explanation:** The arrays we are merging are [1] and [].
The result of the merge is [1].

#

# Two Sum

Given an array of integers  `nums` and an integer  `target`, return  _indices of the two numbers such that they add up to  `target`_.

You may assume that each input would have  **_exactly_  one solution**, and you may not use the  _same_  element twice.

You can return the answer in any order.

**Example 1:**

**Input:** nums = [2,7,11,15], target = 9
**Output:** [0,1]
**Explanation:** Because nums[0] + nums[1] == 9, we return [0, 1].

#

# Intersection of Two Arrays II
Given two integer arrays  `nums1`  and  `nums2`, return  _an array of their intersection_. Each element in the result must appear as many times as it shows in both arrays and you may return the result in  **any order**.

**Example 1:**

**Input:** nums1 = [1,2,2,1], nums2 = [2,2]
**Output:** [2,2]

**Example 2:**

**Input:** nums1 = [4,9,5], nums2 = [9,4,9,8,4]
**Output:** [4,9]
**Explanation:** [9,4] is also accepted.
