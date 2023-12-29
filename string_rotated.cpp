//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
       
        int n=s1.size();
         string s3=s1;
         
         if(s1==s2){
             return true;
         }
         
        for (int i=1;i<n;i++){

    for(int j=0;j<n;j++){
        s3[(i+j)%n]=s1[j];
    }

    if(s2==s3){
        return true;
    }
    
  }
  return false;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}

// } Driver Code Ends


//************Method-2 better**************

class Solution {
public:
    bool rotateString(string s1, string s2) {
        if (s1.length() != s2.length()) {
            return false;
        }

        string s3 = s1 + s1;
        if (s3.find(s2) != string::npos) {
            return true;
        } else {
            return false;
        }
    }
};