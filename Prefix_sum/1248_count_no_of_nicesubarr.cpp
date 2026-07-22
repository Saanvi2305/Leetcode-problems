class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
       unordered_map<int,int> freq;
       int prefix=0;
       int ans=0;
       freq[0]=1;
       for(int i=0;i<nums.size();i++)
    {   if(nums[i]%2==0){
       nums[i]=0;}
       else{
       nums[i]=1;}
        prefix+=nums[i]%2;

        if(freq.count(prefix-k))
        ans+=freq[prefix-k];

        freq[prefix]++;
       } return ans;
    }
};