class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       
       int n=nums.size();
       int temp=1;
       int c=1;
       sort(nums.begin(),nums.end());

       if(n==1 || n==0){
            return n;
       }


       for(int i=0;i<n-1;i++){
           if(nums[i]+1==nums[i+1]){
               c++;
           }
           else if(nums[i]==nums[i+1]){
               continue;
           }
           else{
               temp=max(temp,c);
               c=1;
           }
       }
       
       temp=max(temp,c);
      

       return temp;
    }
};

//     Method -2

