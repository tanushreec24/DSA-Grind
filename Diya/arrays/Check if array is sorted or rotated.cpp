// Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

// There may be duplicates in the original array.

// Note: An array A rotated by x positions results in an array B of the same length such that A[i] == B[(i+x) % A.length], where % is the modulo operation.

 

// Example 1:

// Input: nums = [3,4,5,1,2]
// Output: true
// Explanation: [1,2,3,4,5] is the original sorted array.
// You can rotate the array by x = 3 positions to begin on the the element of value 3: [3,4,5,1,2].
// Example 2:

// Input: nums = [2,1,3,4]
// Output: false
// Explanation: There is no sorted array once rotated that can make nums.
// Example 3:

// Input: nums = [1,2,3]
// Output: true
// Explanation: [1,2,3] is the original sorted array.
// You can rotate the array by x = 0 positions (i.e. no rotation) to make nums.

class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> ans(nums.begin(), nums.end());
        sort(ans.begin(), ans.end());
        for (int i = 0; i < nums.size(); i++) {
            if (nums == ans) {
                return true;
            }
            rotate(nums.begin(), nums.begin() + 1, nums.end());
        }
        return false;
    }
};

// Intuition
// To determine if a vector can be rotated into a sorted order, we need to check if any rotation of the vector matches the sorted version of the vector. The idea is to:

// Sort the Vector:
// First, we create a sorted copy of the original vector. This sorted vector represents the desired non-decreasing order.

// Check All Rotations:
// Next, we rotate the original vector through all possible rotations. For each rotation, we check if it matches the sorted vector.

// Rotation Mechanism:
// We use the std::rotate function to shift the elements of the vector. By rotating the vector one position at a time and checking if it matches the sorted vector, we can determine if it’s possible to obtain a sorted order through rotations.
