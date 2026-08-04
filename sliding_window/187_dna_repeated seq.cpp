class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n=s.length();
    unordered_set<string> seen;
    unordered_set<string> repeated;
        int i;
        for(i=0;i<=n-10;i++){
            string sub = s.substr(i,10);
            if(seen.count(sub)){
                repeated.insert(sub);
            }
            seen.insert(sub);
        }
       vector<string> result(repeated.begin(),repeated.end());
       return result;
    }
};