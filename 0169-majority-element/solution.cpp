class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> set;

        for(int x:nums){
            set[x]++;
        }

        for(auto x:set){
            if(x.second>nums.size()/2) return x.first;
        }
        return 0;
    }
};
