class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& a) {
        vector<int>v;
        int j=0;
        int c=0;
  
for(int i=0;i<a.size();i++){
   if(a[i]==1 ){
    c++;
   
   } 
   else {

    v.push_back(c);
    c=0;
   }
   if(i==a.size()-1){
    v.push_back(c);
   }
}
int max=v[0];
for(int i=0;i<v.size();i++){
    if(v[i]>max){
        max=v[i];
    }
}

  return max;

    }
};