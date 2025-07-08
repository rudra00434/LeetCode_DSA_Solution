class Solution {
public:
    int climbStairs(int n) {
      if(n==0 || n==1)  
      {
        return n;
      }
      int t1=1,t2=2;
      int i=3;
      while(i<=n)
      {
        int next_term=t1+t2;
        t1=t2;
        t2=next_term;
        i++;
      }
      return t2;
    }

};