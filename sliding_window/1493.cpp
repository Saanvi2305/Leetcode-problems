class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n =nums.size();
        int l=0;
        int zero_count=0;
        int ans=0;
        for(int r=0;r<n;r++){
            if(nums[r]==0)
            zero_count++;
            
            while(zero_count>1){
                if(nums[l]==0){
                zero_count--;
                }
                l++;
            }
            ans=max(ans,(r-l+1)-1);
}
        return ans;
    } 
};