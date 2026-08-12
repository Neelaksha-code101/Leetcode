class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> freq;
        int result=0;

        for(int x:nums){
            freq[x]++;
        }
// we cant directly print x, have to access stuff using 1st and 2nd
        for(auto x:freq){
            if(x.second==1){
                result=x.first;
            }
        }

        return result;
    }
};
