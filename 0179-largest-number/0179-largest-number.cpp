class Solution {
    static bool comp(const string& a, const string& b) {
        return a + b > b + a;
    }
public:
    string largestNumber(vector<int>& nums) {
        vector<string> v;
        int i,n = nums.size();
        string ans;
        for(i = 0;i < n;i++)
        {
            v.push_back(to_string(nums[i]));
        }
        sort(v.begin(),v.end(),comp);
        for(i = 0;i < n;i++) ans += v[i];
        if(ans[0] == '0') return "0";
        return ans;
    }
};