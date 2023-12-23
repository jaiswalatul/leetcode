//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    //Function to fill the array elements into a hash table 
    //using Linear Probing to handle collisions.
    vector<int> linearProbing(int m,int arr[], 
    int n)
    {
           vector<int>v(m,-1);
           int capacity=0;
      for(int i=0;i<n;i++){
           
        //   if(capacity==m){
        //       break;
        //   }
           
          int k=0;
          int idx=(arr[i]%m+k)%m;
          int d=idx; 
          while(v[idx]!=-1 && v[idx]!=arr[i]){
              k++;
              idx=(arr[i]%m+k)%m;
              if(d==idx){
                  break;
              }
          }
           
          if(v[idx]==-1){
             
              v[idx]=arr[i];
          }  
           
      }
       
       return v;
    }

};

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int hashSize;
	    cin>>hashSize;
	    
	    int  sizeOfArray;
	    cin>>sizeOfArray;
	    int arr[sizeOfArray];
	    
	    for(int i=0;i<sizeOfArray;i++)
	    cin>>arr[i];
	    
	    vector<int> hash;
	    Solution obj;
	    hash = obj.linearProbing( hashSize, arr, sizeOfArray);
	    
	    for(int i=0;i<hashSize;i++)
	    cout<<hash[i]<<" ";
	    
	    cout<<endl;
	    
	    
	}
	return 0;
}


// } Driver Code Ends