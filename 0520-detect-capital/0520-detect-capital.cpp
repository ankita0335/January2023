class Solution {
public:
    bool allcapital(string word)
    {
        for(char i:word)
        {
            if(i<'A' || i>'Z')
            {
                return false;
            }
        }
        return true;
    }
    bool allsmall(string word)
    {
        for(char i:word)
        {
            if(i<'a' || i>'z')
            {
                return false;
            }
        }
        return true;
    }
    bool allsmallexclude1(string word) 
    {
        if (word[0] >= 'A' && word[0] <= 'Z') 
        {
            for (int i = 1; i < word.size(); i++) 
            {
                if (word[i] < 'a' || word[i] > 'z') 
                {
                    return false;
                }
            }
            return true;
        } 
        else
        {
            return false;
        }
    }
    bool detectCapitalUse(string word) 
    {
        if(allcapital(word) || allsmall(word) || allsmallexclude1(word))
        {
            return true;    
        }
        return false;
    }
};