/*
* Problem link:
* https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
*/

class Solution {
    public int subtractProductAndSum(int n) {
        char[] arrayOfChars = ("" + n).toCharArray();
        int nLength = arrayOfChars.length;
        int[] arrayOfDigits = new int[nLength];
        for(int i = 0; i < nLength; i++){
            arrayOfDigits[i] = Integer.parseInt(String.valueOf(arrayOfChars[i]));
        }
        int res = findProduct(arrayOfDigits) - Arrays.stream(arrayOfDigits).sum();
        return res;
    }
    
    public static int findProduct(int[] array) {
	    int prod = 1;
	    for (int value : array) {
	        prod *= value;
	    }
	    return prod;
	}
}

