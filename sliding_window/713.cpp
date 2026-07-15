class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
       int l=0,r;
       int product=1;
       int count=0;
       if(k<=0){return 0;}
       for(r=0;r<nums.size();r++){
        product*=nums[r];
        while(product>=k){
           
            product/=nums[l];
            l++;
        } count+=r-l+1;

       } return count;
    }
};