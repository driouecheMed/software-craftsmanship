/*
* Problem link:
* https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
*/

class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        //search for the max candies owned by a kid
        int maxCandies = candies[0];
        for(int i = 1; i < candies.length; i++){
            maxCandies = Math.max(maxCandies, candies[i]);
        }
    
        // greedy
        List<Boolean> l = new ArrayList<Boolean>(); 
        for(int i = 0; i < candies.length; i++){
            if(candies[i] + extraCandies >= maxCandies){
                l.add(true);
            }else{
                l.add(false);
            }
        }
        return l;
    }
}

