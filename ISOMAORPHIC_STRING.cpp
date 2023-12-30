class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        int n=s.size();
        unordered_map<char,char>m;
        unordered_map<char,char>m1;
        for(int i=0;i<n;i++){
             m.insert({s[i],t[i]});
            m1.insert({t[i],s[i]});

        }
          
        for(int i=0;i<n;i++){
            if( m[s[i]] != t[i] || m1[t[i]] != s[i] ){
                   return false;
            }
        }
        return true;
    }
};

