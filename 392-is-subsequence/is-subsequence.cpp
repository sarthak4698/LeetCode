class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i =0;
        int j =0;
        if(s.length()==0)
        {
            return true;

        }

        for(int j =0 ; j<t.length();j++)
        {
            
            if(s[i]==t[j])
            {
                i++;
                if(i==s.length())
                {
                    return true;

                }
                
                
            }
        
        }

        return false ;

    }
};