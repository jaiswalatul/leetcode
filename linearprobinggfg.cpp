//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    //Function to fill the array elements into a hash table 
    //using Linear Probing to handle collisions.
    vector<int> linearProbing(int hashSize,int arr[], 
    int sizeOfArray)
    {
        //Your code here
        int idx=0;
        int n=sizeOfArray;
        int capacity=0;
        vector<int>ans(hashSize,-1);
        
      for(int i=0;i<n;i++){
          
          if(capacity==hashSize){
              break;
          }
          
          int j=arr[i]%hashSize;
          
          int d=j;
           
            while(ans[j]!=-1 && ans[j]!=arr[i])
            {
                j=(j+1)%hashSize;
                if(d==j)
                    break;
            }
            
          if(ans[j]==-1){
              capacity++;
              ans[j]=arr[i];
          }  
          
      }
        
        return ans;
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