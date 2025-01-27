class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char ,int>r,m;

        for(int i =0 ; i<ransomNote.length();i++)
        {
            r[ransomNote[i]]++;

        }

        for(int i =0 ; i<magazine.length();i++)
        {
            m[magazine[i]]++;

        }

        for(int i =0 ; i<ransomNote.length();i++)
        {
            if(r[ransomNote[i]]>m[ransomNote[i]])
            {
                return false;

            }
        }
        return true;

    }
};