class Solution {
public:
    bool check(vector<int>& nums) {
        int shift=0;

        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                shift=i+1;
                break;
            }
        }

        if(shift!=0){
            for(int i=shift;i<nums.size()-1;i++){
               if(nums[i]>nums[i+1]){
                return false;
                }
            }

            if (nums[nums.size() - 1] > nums[0]) return false;
        }
        return true;
    }
};
