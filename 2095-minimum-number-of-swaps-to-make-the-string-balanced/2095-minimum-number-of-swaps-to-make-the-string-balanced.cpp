class Solution {
public:
    int minSwaps(string s) {
        int i,n = s.size(),ans = 0;
        stack<int> st;
        for(i = 0;i < n;i++)
        {
            if(!st.empty() && st.top() == '[' && s[i] ==']') st.pop();
            else st.push(s[i]);
        }
        n = st.size();
        if((n / 2) & 1)
        {
            n -= 2;
            ans++;
        }
        ans += n / 4;
        return ans;
    }
};