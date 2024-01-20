#include <vector>
#include <stack>

class Solution {
public:
    int M = 1e9 + 7;

    int sumSubarrayMins(std::vector<int>& arr) {
        int n = arr.size();
        std::stack<int> st;  
        long long result = 0; 
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[i] < arr[st.top()]) {
                int top = st.top();
                st.pop();

                int left = top - (st.empty() ? -1 : st.top());
                int right = i - top;

                result = (result + (long long)arr[top] * left * right) % M;
            }
            st.push(i);
        }
        while (!st.empty()) {
            int top = st.top();
            st.pop();

            int left = top - (st.empty() ? -1 : st.top());
            int right = n - top;

            result = (result + (long long)arr[top] * left * right) % M;
        }

        return result;
    }
};
