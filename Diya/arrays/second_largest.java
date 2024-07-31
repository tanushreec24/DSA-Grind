class Solution {
    public int print2largest(List<Integer> arr) {
        if (arr.size() < 2) {
           
            return -1;
        }

        int max1 = Integer.MIN_VALUE;
        int max2 = Integer.MIN_VALUE;

       
        for (int i = 0; i < arr.size(); i++) {
            int num = arr.get(i);
            if (num > max1) {
                max2 = max1;  
                max1 = num;
            } else if (num > max2 && num != max1) {
                max2 = num;
            }
        }

        return max2 == Integer.MIN_VALUE ? -1 : max2; 
    }
}

// Intuition:
// Even though we want to have just the second smallest and largest elements, we are still sorting the entire array for that and thus increasing the time complexity. Can we somehow try to not sort the array and still get our answer?

// Approach:
// Find the smallest and largest element in the array in a single traversal
// After this, we once again traverse the array and find an element that is just greater than the smallest element we just found.
// Similarly, we would find the largest element which is just smaller than the largest element we just found
// Indeed, this is our second smallest and second largest element.



// Intuition:
// Even though we want to have just the second smallest and largest elements, we are still sorting the entire array for that and thus increasing the time complexity. Can we somehow try to not sort the array and still get our answer?

// Approach:
// Find the smallest and largest element in the array in a single traversal
// After this, we once again traverse the array and find an element that is just greater than the smallest element we just found.
// Similarly, we would find the largest element which is just smaller than the largest element we just found
// Indeed, this is our second smallest and second largest element.

