class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();

        unordered_map<int,int> freq;

        for(int x:nums){
            freq[x]++;
        }
        int i=0;

        while(i<n){
            if(i<freq[0]){
                nums[i]=0;
            }
            else if(i>=freq[0] && i<freq[1]+freq[0]){
                nums[i]=1;
            }
            else{
                nums[i]=2;
            }
            i++;
        }
    }
};
