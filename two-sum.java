/*
* Problem link:
* https://leetcode.com/problems/two-sum/
*/

class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] solution = new int[2];
        for(int i = 0; i < (nums.length - 1); i++){
            for(int j = (i + 1); j < nums.length; j++){
                if(nums[i] + nums[j] == target){
                    solution[0] = i;
                    solution[1] = j;
                    break;
                }
            }    
        }
        return solution;
    }
}

