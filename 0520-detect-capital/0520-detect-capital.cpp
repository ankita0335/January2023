class Solution {
public:
    bool allcapital(string word){
        for(char i:word){
            if(i<'A' || i>'Z'){
                return false;
            }
        }
        return true;
    }
    bool allsmall(string word){
        for(char i:word){
            if(i<'a' || i>'z'){
                return false;
            }
        }
        return true;
    }
    bool detectCapitalUse(string word) {
        if(allcapital(word) || allsmall(word) || allsmall(word.substr(1))){
            return true;    
        }
        return false;
    }
};