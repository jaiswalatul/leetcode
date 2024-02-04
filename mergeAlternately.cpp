class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int s1=word1.size();
        int s2=word2.size();
        int c=min(s1,s2);
        string str="";
        for(int i=0;i<s2;i++){
            if(i<c){
                str+=" ";
            }
            str+=word2[i];
        }
        
        int k=0;

        for(int i=0;i<str.size()||i<s1;i++){
            if(i%2==0  && k<c){
                str[i]=word1[k];
               cout<<k;
                k++;
            }
            
        }
        while(k<s1){
            str+=word1[k++];
        }

        return str;
    }
};