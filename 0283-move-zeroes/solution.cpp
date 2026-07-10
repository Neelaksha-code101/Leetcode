class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zro_cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                int temp=nums[zro_cnt];
                nums[zro_cnt]=nums[i];
                nums[i]=temp;
                zro_cnt++;
            }          
        }
    }

};
