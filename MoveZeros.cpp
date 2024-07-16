class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastpostion=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[lastpostion]=nums[i];
                lastpostion++;
            }
        }
        for(int i=lastpostion;i<nums.size();i++){
            nums[i]=0;
        }
    }
};
