class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int max_len=0; 

        vector<int> hash(256,-1);

        for(int right=0;right<s.length();right++){

            if(hash[s[right]]>=left){
                left=hash[s[right]]+1;
            }

            hash[s[right]]=right;

            int len=right-left+1;
            max_len=max(max_len,len);
        }
        return max_len;
    }
};
