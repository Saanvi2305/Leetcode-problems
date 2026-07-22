class Solution {
public:
    int findMaxLength(vector<int>& nums) {
       unordered_map<int,int> firstindex;
       firstindex[0]=-1;
       int prefix=0;
       int ans=0;
       for(int i=0;i<nums.size();i++){
        if(nums[i]==0)
        nums[i]=-1;
        prefix+=nums[i];

        if(firstindex.count(prefix-0))
        ans=max(ans,i-firstindex[prefix-0]);

        if(!firstindex.count(prefix-0))
        firstindex[prefix]=i;
       } return ans;
    }
};