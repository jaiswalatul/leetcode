
// <***************method-1*******************>


#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& nums, int k){
    // Write your code here
    long long n=nums.size();
    long long sum=0;
    int len=0;
    for(int i=0;i<n;i++){
            long long sum=0;
        for(int j=i;j<n;j++){
            sum=sum+nums[j];
            if(sum==k){
                    len=max(len,j-i+1);
                }
        }
    }
    return len;
}


// <***************Method-2*******************>


// int getLongestSubarray(vector<int>& a, int k){
//     // Write your code here
//     map<long long,int> presummap;
//     long long sum=0;
//     int maxlen=0;
//     for(int i=0;i<a.size();i++){
//         sum+=a[i];
//         if(sum==k){
//             maxlen=max(maxlen,i+1);
//         }
//         long long rem=sum-k;
//         if(presummap.find(rem)!=presummap.end()){
//             int len=i-presummap[rem];
//             maxlen=max(maxlen,len);
//         }
//         if(presummap.find(sum)==presummap.end()){
//             presummap[sum]=i;
//         }
//     }

//     return maxlen;
// }


//************************ Method-2*********************

