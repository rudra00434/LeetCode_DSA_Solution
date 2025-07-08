class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr=0, max_sum=INT_MIN;
        for(int val : nums)
        {
           curr=curr+val;
           max_sum=max(curr,max_sum);
           if(curr<0)
           {
            curr=0;
           }
        }
      return max_sum;
    }
};