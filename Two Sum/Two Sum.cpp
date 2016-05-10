/*
    时间复杂度O(n^2)
*/

public class Solution {
	    public int[] twoSum(int[] nums, int target) {
	        
	        int[] num=new int[2];
	        for(int i=0;i<nums.length;i++){
	            for(int j=i+1;j<nums.length;j++){
	               int sum=nums[i]+nums[j];
	               if(sum==target){
	            	 num[0]=i;
	            	 num[1]=j;
	               }
	            }
	        }
		return num;
	    }
}
