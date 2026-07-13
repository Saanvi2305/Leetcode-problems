class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
      int l=0,r;
      int minlength=INT_MAX;
      int i,sum=0;
      for(r=0;r<nums.size();r++){
        sum+=nums[r];
        while(sum>=target){
             minlength=min(minlength,r-l+1);
            sum-=nums[l];
            l++;
            
        } 
        } if(minlength == INT_MAX){
        return 0;}
      return minlength; 
      }
};