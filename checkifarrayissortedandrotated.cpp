#include<iostream>
#include<vector>
using namespace std;

int main(){
    

    vector<int>nums;
    nums={5,7,7,8,8,10};
    int target=8;
        int start=0;
        vector<int>ans;
        int end=nums.size()-1;
        
        int mid=(start+end)/2;
       while(start<=end){
             if(nums[mid]>target){
                 end=mid-1;
             }
            if(nums[mid]<target){
                start=mid+1;
            }
            // if(nums[mid]==target){
            //     ans.push_back(mid);
            //     ans.push_back(mid+1);
            // }

            // mid=(start+end)/2;
        }
        
       

       cout<<"hello world";
        
       
      
    return 0;
    }
