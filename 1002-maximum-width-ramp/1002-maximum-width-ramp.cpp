class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int i,n = nums.size();
        vector<pair<int,int>> v(n);
        for(i = 0;i < n;i++)
        {
            v[i].first = nums[i];
            v[i].second = i;
        }
        sort(v.begin(),v.end());
        int ans = 0,mini = 1e7;
        for(i = 0;i < n;i++)
        {
            mini = min(mini,v[i].second);
            ans = max(ans,v[i].second - mini);
        }
        return ans;
    }
};