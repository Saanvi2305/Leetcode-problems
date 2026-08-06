class Solution {
public:
int  possibledays(vector<int>& bloomDay, int m, int k,int days){
    int count=0;
    int no_of_bouquets=0;
    for(int i=0;i<bloomDay.size();i++){
        if(bloomDay[i]<=days){
            count++;

        } else{
            no_of_bouquets+=(count/k);
            count=0;
        } 

    }
    no_of_bouquets+=(count/k);
     return (no_of_bouquets>=m);
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        if( (long long)bloomDay.size()<(long long)m*k) return -1;
        while(low<=high){
            int mid=(low+high)/2;
            int min_days=possibledays(bloomDay,m,k,mid);
            if(min_days==1){
                high=mid-1;
            }
            else{
                low=mid+1;
            }  
        }
        return low;
         
    }
};