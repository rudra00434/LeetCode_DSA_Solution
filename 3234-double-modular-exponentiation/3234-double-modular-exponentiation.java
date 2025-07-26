import java.util.*;
class Solution {
    public long power(int x,int n,int mod)
    {
        long ans=1;
        while(n>0)
        {
            if((n&1)==1)
            {
              ans=(ans*x) % mod;
              n=n-1;
            }
            else
            {
                n=n>>1;
                x=(x*x) % mod;
            }
        }
        return ans;
    }
    public List<Integer> getGoodIndices(int[][] variables, int target) {
        List<Integer> result = new ArrayList<>();
        int i=0;
        for(int[] row: variables)
        {
            long var1=power(row[0],row[1],10);
            long var2=power((int) (var1 % 10),row[2],row[3]);
        
        if(var2== target)
        {
            result.add(i);
        }
        i++;
        }
        return result;
    }
    
}