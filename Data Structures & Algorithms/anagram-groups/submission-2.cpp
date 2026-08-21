class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //using map
        unordered_map<string,vector<string>>mp;
        for(int i = 0;i<strs.size();i++){
            string a = strs[i];
            sort(a.begin(),a.end());
            mp[a].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto it : mp){
            ans.push_back(it.second);
        }
        return ans;



        // if(strs.size() == 0){
        //     return {{}};
        // }
        // if(strs.size() == 1){
        //     return {strs};
        // }
        // vector<vector<string>>ans;
        // vector<string>a;
        // set<string>check;
        // for(int i = 0;i<strs.size();i++){
        //     string a = strs[i];
        //     sort(a.begin(),a.end());
        //     int j = 0;
        //     if(check.find(a) == check.end()){
        //         check.insert(a);
        //         vector<string>ins;
        //         // ins.push_back(a);
        //         for(j;j<strs.size();j++){
        //             string b = strs[j];
        //             sort(b.begin(),b.end());
        //             if(a == b){
        //                 ins.push_back(strs[j]);
        //             }
        //         }
        //         ans.push_back(ins);
        //     }
        // }return ans;
    }
};
