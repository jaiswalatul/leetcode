class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        int i=0;
        string result;

        while(i<n){
            while(s[i]==' '){
                i++;
               
            }

            if(i>=n){
                
                break;
            }
            int j=i;
            while(j<n && s[j]!=' '){
                j++;
            }

            string sub=s.substr(i,j-i);

            if(result.length()==0){
                result=sub;
            }
            else{
               
                result=sub+' '+result;
            }
          i=j+1;

        }
        return result;
    }
};