#include<iostream>
#include<vector>
using namespace std;

int firstidx(vector<int>nums,int target){

    int s=0;
    int idx=-1;
      int e=nums.size()-1;
      int mid=(s+e)/2;

      while(s<=e){
        if(nums[mid]==target){
            idx=mid;
            cout<<"hiiii"<<endl;
            e=mid-1;
        }
        else if(nums[mid]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
      mid=(s+e)/2;
      }

      cout<<"answer is:"<<idx<<endl;
      return idx;

}

int lastidx(vector<int>nums,int target){

    int s=0;
    int idx=-1;
      int e=nums.size()-1;
      int mid=(s+e)/2;

      while(s<=e){
        if(nums[mid]==target){
            idx=mid;
            s=mid+1;
        }
      else  if(nums[mid]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }

        mid=(s+e)/2;
      }

      return idx;

}




int main(){


   vector<int>nums;
   nums={5,7,7,8,8,10};
   int target=6;

      int a=firstidx(nums,target);
      int b=lastidx(nums,target);

         


      vector<int>ans(2);
      ans.clear();
      ans.push_back(a);
      ans.push_back(b);

      for(int i=0;i<2;i++){
        cout<<ans[i];
      }
     
    return 0;
}