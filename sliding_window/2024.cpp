class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
      int n = answerKey.size();
      int l=0;
      int ans=0;
      int max_freq=0;
      vector <int> freq(128,0);
      for(int r=0;r<n;r++){
        freq[answerKey[r]]++;
        max_freq=max(max_freq, freq[answerKey[r]]);
               while((r-l+1)-max_freq>k){
            freq[answerKey[l]]--;
            l++;
            
         }
          
          ans=max(ans,r-l+1);
        
        
      }
 return ans;

    }
};