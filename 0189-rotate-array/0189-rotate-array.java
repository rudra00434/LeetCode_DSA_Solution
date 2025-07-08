class Solution {
    public void rotate(int[] nums, int k) {
        int n = nums.length;
        k=k%n;
        int arr[] = new int[n];
        for(int i=0 ; i<n;i++)
        {
            arr[(i+k)%n]=nums[i];
        }
        for(int i=0;i<n;i++)
        {
            nums[i]=arr[i];
        }

    }
}