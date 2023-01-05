/*
* Problem link:
* https://leetcode.com/problems/richest-customer-wealth/
*/

class Solution {
    public int maximumWealth(int[][] accounts) {
        List<Integer> costumers = new ArrayList<Integer>();
        int sum;
        for(int i = 0; i < accounts.length; i++){
            sum = 0;
            for(int j = 0; j < accounts[i].length; j++){
                sum += accounts[i][j];
            }
            costumers.add(sum);
        }
        return Collections.max(costumers);
    }
}

