class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //brute force
       /* int ans=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j] && i!=j){
                    ans= nums[i];
                }
            }
        }
        return ans;*/

        //by sorting
       /* int ans=0;
        sort(nums.begin(),nums.end());

            for(int i=0;i<nums.size()-1;i++){
                int j=i+1;

                if(nums[i]==nums[j]){
                     ans=nums[i];
                }
            }

            return ans;*/

        //by poisting method
        while(nums[0]!=nums[nums[0]]){
            swap(nums[0],nums[nums[0]]);
        }
        return nums[0];
        
    }
};
