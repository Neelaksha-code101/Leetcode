class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int m=0;
        //m=next position for the non zero integer
        //n=next non-zero integer
        int size=nums.size();
        for(int i=0;i<size;i++){
            if(nums[i]!=0){
                swap(nums[m],nums[i]);
                m++;
            }
        }
    }
};
