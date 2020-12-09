/*
* Problem link:
* https://leetcode.com/problems/duplicate-zeros/
*/


class Solution {
    
    public void shift(int[] arr, int startIndex) {
        for(int i = (arr.length - 2); i > startIndex; i--) {
             arr[i+1] = arr[i];
        }
    }
    
    public void duplicateZeros(int[] arr) {
        for(int i = 0; i < (arr.length - 1); i++) {
             if(arr[i] == 0) {
                 shift(arr, i);
                 i++;
                 arr[i] = 0;
             }
        }
    }
    
}

