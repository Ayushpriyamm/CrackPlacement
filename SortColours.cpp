class Solution {
public:
    void sortColors(vector<int>& nums) {

        int zero=0;//use for zero  
        int one=0;//use for one
        int two=nums.size()-1;//use for two

        while(one <= two){
            //yaha p zero wale sare element ho pehle sort kr le 
            if(nums[one]==0){
                swap(nums[one],nums[zero]);
                zero++;
                one++;
            }
            else if(nums[one]==1){
                //no need to swap with anyone
                one++;
            }
            else{
                //agr one ki value is = 2 then
                swap(nums[one],nums[two]);
                two--;
            }


        }

        
    }
};
