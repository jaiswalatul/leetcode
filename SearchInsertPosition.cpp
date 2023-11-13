class Solution {
public:
    int searchInsert(vector<int>& v, int target) {
         

         int s=0;
         int e=v.size()-1;
           int ans=-1;
         int mid=(s+e)/2;
         while(s<=e){
             if(v[mid]<target){
                 s=mid+1;
             }

             if(v[mid]>target){
                 e=mid-1;
             }

             if(v[mid]==target){
                 ans=mid;
                 return mid;
             }

             mid=(s+e)/2;
         }
           
            //Inner and Outer Problem of For Loop

              if(v[v.size()-1]<target){
             ans=v.size();
         }

         if(v[0]>target){
             return 0;
         }

          //Inner and Outer Problem of For Loop
            

         if(ans==-1){
             for(int i=0;i<v.size()-1;i++){
                 if(v[i]<target && v[i+1]>target){
                     ans=i+1;
                 }
             }
         }

        

         return ans;

    }
};