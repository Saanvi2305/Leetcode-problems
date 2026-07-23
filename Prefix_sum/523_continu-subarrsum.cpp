class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
      unordered_map <int,int> firstindex;;
      long long prefix=0;
     firstindex[0]=-1; 
     int ans=0;
     for(int i=0;i<nums.size();i++){
        prefix+=nums[i];
         int rem=((prefix%k)+k)%k;
         if(firstindex.count(rem)){
         int length=i-firstindex[rem];
         if(length>=2)
         return true;}
        if(!firstindex.count(rem))

         firstindex[rem]=i;
         
     } return false;
    }
};