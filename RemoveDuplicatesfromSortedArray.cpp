class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       stack<int>st;
       st.push(nums[0]);

       for(int i=1;i<nums.size();i++){
        if(nums[i]!=st.top()){
            st.push(nums[i]);
        }
       }
       int k=st.size();

       for(int i=st.size()-1;i>=0;i--){
        nums[i]=st.top();
        st.pop();
       }
      return k;
    }
};
