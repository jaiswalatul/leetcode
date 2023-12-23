//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
    public:
    //Complete this function
    //Function to return the count of non-repeated elements in the array.
    int countNonRepeated(int arr[], int n)
    {
        //Your code here
        unordered_map<int,int>map;
        
        for(int i=0;i<n;i++){
            map[arr[i]]++;
        }
        
        int c=0;
        
        for(int i=0;i<n;i++){
            if(map[arr[i]]==1){
                c++;
            }
        }
        
        return c;
        
    }

};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    cout<<obj.countNonRepeated(arr,n)<<endl;
	    
	}
	return 0;
}

// } Driver Code Ends