class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int n=nums.length,window=0;
        int ans=n+1,left=0;
        for(int right = 0; right< n ; right++)
        {
          window= window+ nums[right];
          while(window>=target)
          {
            ans=Math.min(ans,right-left+1);
            window=window-nums[left++];
          }
        }
        return ans==(n+1) ? 0 : ans;
    }
}