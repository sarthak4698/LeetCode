class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int i=0;
        int j =0;
        sort(ransomNote.begin(),ransomNote.end());
        
        sort(magazine.begin(),magazine.end());

        for(int j=0 ;j<magazine.length(); j++)
        {
            if(ransomNote[i]==magazine[j])
            {
                i++;

                if(i==ransomNote.length())
                {
                    return true;

                }
            }
        }
        return false;

    }
};