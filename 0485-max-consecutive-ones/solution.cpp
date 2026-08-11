class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> count(nums.size()+1,0);
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=1){
                j++;
                continue;
            }
            count[j]++;
        }

        int max=count[0];
        for(int i=1;i<count.size();i++){
            if(count[i]>max){
                max=count[i];
            }
        }
        return max;
    }
};
