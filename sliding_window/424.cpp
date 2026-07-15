#longest  repeating characterReplacement

class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        int i;
        int max_freq=0;
        int l=0;
        int r,ans=0;
       
      vector<int> freq(26,0);
       for(r=0;r<n;r++){
        freq[s[r]-'A']++;
       max_freq= max(max_freq,freq[s[r]-'A']);
        int window_size=r-l+1;
        if(window_size-max_freq>k){
            freq[s[l]-'A']--;
            l++;}
            ans=max(ans,r-l+1);
           }

       return ans;
        }

};