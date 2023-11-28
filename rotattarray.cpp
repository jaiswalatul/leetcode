#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  
  vector<int>arr;
  arr={-1,-100,3,99};
  int k=2;
  int c=0;

  if(arr.size()==0 || arr.size()==1){
           int c=0;
           c++;
       }


   else{


 
        int n=arr.size();
   k=k%n;

   vector<int>temp(k);

  for(int i=n-k;i<n;i++){
      temp[i-(n-k)]=arr[i];
  }
  int j=n-1;
  for(int i=n-1-k;i>=0;i--){

       

      arr[j]=arr[i];
      j--;
    

  }

  
  for(int i=0;i<k;i++){
      arr[i]=temp[i];
  }

   }

for(int i=0;i<n;i++){
    cout<<arr[i]<<"  ";
}

    return 0;
}