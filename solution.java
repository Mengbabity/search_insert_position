package search_insert_position;

public class solution {
    public int searchInsert(int[] nums, int target) 
    {
	        
    	int n=nums.length;
	    for(int i=0;i<n;i++)
	    	if(nums[i]==target)
	    		return i;
	    
	    if(nums[0]>target)
	    	return 0;
	    if(nums[n-1]<target)
	    	return n;
	    
	    for(int j=0;j<n;j++)
	    	if(target>nums[j]&&target<nums[j+1])
	    		return j+1;
	    
	    return 0;
	}
}
