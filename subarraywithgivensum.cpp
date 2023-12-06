
// <***************method-1*******************> Partiallly accepted


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


// <***************Method-2*******************>  Partialy accepted


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


//************************ Method-3*********************

int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int left=0;
    int right=0;
    long long sum=a[0];
    int maxlen=0;
    int n=a.size();

    while(right<n){
        while(left<=right && sum>k){
            sum-=a[left];
            left++;
        }

        if(sum==k){
            maxlen=max(maxlen,right-left+1);
        }

        right++;
        if(right<n){
            sum+=a[right];
        }
    
    }

    return maxlen;

}



