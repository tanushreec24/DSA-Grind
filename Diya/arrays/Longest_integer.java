class Solution {
    public static int largest(int n, int[] arr) {
        int maxInt = 0;
        for(int i=0;i<n;i++){
            if(arr[i]>maxInt){
                maxInt=arr[i];
            }
        }
        return maxInt;
    }
}

//time complexity is O(n)
//brute approch is sorting and then finding the last element..time is O(nlogn)
