class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        
        unordered_map<char,int>m1;
         unordered_map<char,int>m2;

         for(int i=0;i<n;i++){
             m1[s[i]]++;
         }

         for(int i=0;i<m;i++){
             m2[t[i]]++;
         }


        if(n!=m){
            return false;
        }

        for(int i=0;i<n;i++){
            if(m1[s[i]]!=m2[s[i]]){
                return false;
            }
        }
         return true;
    }
};