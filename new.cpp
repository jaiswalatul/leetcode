   #include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printarray(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}


int main(){

    vector<int>nums;
    nums={0,1,0,3,12};

     int n=nums.size();
      vector<int>arr(n);
      int j=0;
     for(int i=0;i<n;i++){
         if(nums[i]!=0){
           
             arr[j]=nums[i];
             j++;
         }
     }
     
     printarray(arr);

     int c=0;

     for(int i=0;i<n;i++){
         if(nums[i]==0){
             c++;
         }
     }

     for(int i=0;i<n;i++){
         if(i<arr.size()){
             nums[i]=arr[i];
         }
         else{
             nums[i]=0;
         }
     }
     return 0;
}