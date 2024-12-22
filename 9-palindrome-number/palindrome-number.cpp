class Solution {
public:
    bool isPalindrome(int x) {
        
        if (x< 0)
        {
            return false;
            
        }
        int temp = x;
        long long int last_digit ;
        long long int rev =0;
        
        while (x!=0)
        {
            last_digit = x%10;
            rev = rev * 10 + last_digit ;
            x = x/10;

        }

        if ( rev ==temp )
        {
            return true;

        }
        else
        {
            return false ;

        }


    }
};