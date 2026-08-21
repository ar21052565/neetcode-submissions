class Solution {
    
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i = 0; i < nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int>ans;
        vector<pair<int, int>> v(mp.begin(), mp.end());
        sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second;
        });
        for(auto it : v){
            if(k){
            ans.push_back(it.first);
            k--;
            }
        }
        return ans;
    }
};
