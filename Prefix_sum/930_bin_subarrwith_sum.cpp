class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map <int ,int> freq;
        int prefix=0;
        int ans=0;
        freq[0]=1;
        for(int x:nums){
            prefix+=x;
            if(freq.count(prefix-goal))
            ans+=freq[prefix-goal];

             freq[prefix]++;
        }
        return ans;
    }
};