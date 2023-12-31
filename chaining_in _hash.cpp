//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    //Function to insert elements of arr in the hashTable avoiding collisions.
    
vector<vector<int>> separateChaining(int hashsize, int
arr[], int sizeOfArray)
{
    int n=sizeOfArray;
    vector<vector<int>>hash(hashsize);
    for(int i=0;i<n;i++){
        int key=arr[i]%hashsize;
        hash[key].push_back(arr[i]);
    }
    return hash;
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
	    
	    
	    int sizeOfArray;
	    cin>>sizeOfArray;
	    int arr[sizeOfArray];
	    
	    for(int i=0;i<sizeOfArray;i++)
	    cin>>arr[i];
	    Solution obj;
	    vector<vector<int>> hashTable;
	    hashTable = obj.separateChaining( hashSize, arr, sizeOfArray);
	    
	    for(int i=0;i<hashTable.size();i++)
	    {
	        if(hashTable[i].size()>0)
	        {
	            cout<<i<<"->";
	            for(int j=0;j<hashTable[i].size()-1;j++)
	            {
	                cout<<hashTable[i][j]<<"->";
	            }
	            cout<<hashTable[i][hashTable[i].size()-1];
	            cout<<endl;
	        }
	    }
	    
	    
	    
	}
	return 0;
};

// } Driver Code Ends