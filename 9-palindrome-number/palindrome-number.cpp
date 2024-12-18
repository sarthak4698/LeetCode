class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        if(x==0)
        {
            return true;
        }
        long long int rev =0;
        long long int last_digit;
        int temp = x;
        

        while (x!=0)
        {
            last_digit =  x% 10;
            rev = rev*10 +last_digit;
            x = x/10;

        }
        if(rev==temp )
        {
            return true;

        }
        else 
        {
            return false;

        }

    }
};