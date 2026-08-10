class Solution {
public:
    bool isAnagram(string s, string t) {
        //1st approach sort both
        if(s.length() != t.length()){
            return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i = 0;i<s.size();i++){
            if(s[i] != t[i]) return false;
        }
        return true;
    }
};
