class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& a) {
        stack<int>s;
        int n=a.size();
        vector<int>v(n,0);
        for(int i=0;i<n;i++){
            while(!s.empty() && a[i]>a[s.top()]){
                int p=s.top();
                s.pop();
                v[p]=i-p; 
            }
            s.push(i);
        }
        return v;
    }
};


