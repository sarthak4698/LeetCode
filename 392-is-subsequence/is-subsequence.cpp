class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.empty())
        {
            return true ;

        }
        if(s ==t )
        {
            return true ;

        }
        int j =0;
        for(int i =0 ; i<t.size(); i++)
        {
            if(s[j]==t[i])
            {
               j++;
               if(j == s.size())
               {
                    return true;
               }
            }
        }
        return j == s.size();
    }
};