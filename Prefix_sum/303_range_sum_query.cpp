class NumArray {
       vector<int> prefix;
public:
    NumArray(vector<int>& nums) {
        int n=nums.size();
        prefix.resize(n+1);
  for(int i=0;i<n;i++)
prefix[i+1]=prefix[i]+nums[i];
        }
    
    int sumRange(int left, int right) {
       int sum=prefix[right+1]-prefix[left]; 
       return sum;
    }
};
