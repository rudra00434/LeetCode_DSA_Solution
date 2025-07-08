class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        else
        {
        long long rev=0;
        long long n=x;
        while(n!=0)
        {
            int rem=n%10;
            rev=rev*10+rem;
            n=n/10;

        }
        if(rev==x)
        {
            return true;
        }
        else
        {
             return false;
        }
    }
    }
};