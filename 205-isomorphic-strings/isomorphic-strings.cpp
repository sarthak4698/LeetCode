class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char , char >lux,spm;

        for(int i =0 ;i<s.size();i++)
        {
            if(!lux[s[i]])
            {
                lux[s[i]]=t[i];

            }
            else if(lux[s[i]]!=t[i])
            {
                return false;

            }

        }
        for(int i =0 ;i<t.size();i++)
        {
            if(!spm[t[i]])
            {
                spm[t[i]]=s[i];

            }
            else if(spm[t[i]]!=s[i])
            {
                return false;

            }

        }
        
        return true;

    }
};