class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int> st(arr.begin(), arr.end());
        int i,count = 1,n = arr.size();
        unordered_map<int,int> mp;
        for(auto& it : st) mp[it] = count++;
        vector<int> ans(n);
        for(i = 0;i < n;i++)
        {
            ans[i] = mp[arr[i]];
        }
        return ans;
    }
};