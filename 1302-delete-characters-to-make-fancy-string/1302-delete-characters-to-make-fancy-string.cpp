class Solution {
public:
    string makeFancyString(string s) {
        int i,n = s.size();
        string ans;
        vector<bool> taken(n, true);
        for(i = 2;i < n;i++)
        {
            if(s[i] == s[i - 1] && s[i - 1] == s[i - 2]) taken[i - 2] = false;
        }
        for(i = 0;i < n;i++)
        {
            if(taken[i]) ans.push_back(s[i]);
        }
        return ans;
    }
};