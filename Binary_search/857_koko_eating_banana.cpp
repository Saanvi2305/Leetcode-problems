class Solution {
public:
int findmax(vector<int>& piles){
    int n=piles.size();
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
    maxi=max(maxi,piles[i]);}
return maxi;
} 
long long findtotalhrs(vector<int>& piles,int k){
    int n=piles.size();
    long long totalhrs=0;
    for(int i=0;i<n;i++){
    totalhrs+=ceil((double)piles[i]/k);}
    return totalhrs;
} 
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        long long high=findmax(piles);
       
        while(low<=high){
            int mid=(low+high)/2;
             long long totalhours=findtotalhrs(piles,mid);
            if(totalhours<=h){
            high=mid-1;}
            else{
            low=mid+1;}
        } return low;

    }
};