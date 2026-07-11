class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;

        if(s.length()!=t.length()){
            return false;
        }

        for(char c:t) mp[c]++;// mp[c] is created than and there with key value 0 and then modified
        for(char c:s){
            mp[c]--;
            if(mp[c]<0){
                return false;
            }
        }

        return true;
    }
};
