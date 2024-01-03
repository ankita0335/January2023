class Solution {
public:
    int compress(vector<char>& chars) {
        int idx=0,i=0;
        int n=chars.size();
        while(i<n){
            char curr=chars[i];
            int c=0;
            while(i<n && chars[i]==curr){
                c++;
                i++;
            }
            chars[idx]=curr;
            idx++;
            if(c>1) {
                string count=to_string(c);
                for(char &i:count){
                    chars[idx]=i;
                    idx++;
                }
            }
        }
        return idx;     
    }
};
