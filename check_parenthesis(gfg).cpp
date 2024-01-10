//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    
    bool mathing(char a , char b){
        return ((a=='{' && b=='}') || (a=='(' && b==')') 
        ||  (a=='[' && b==']'));
    }
    bool ispar(string xtr)
    {
        // Your code here
        stack<int>s;
        for(char x:xtr){
            if(x=='{' || x=='(' || x=='['){
                s.push(x);
            }
            else{
                
                if(s.empty()==true){
                    return false;
                }
                
                if(mathing(s.top(),x)==false){
                    return false;
                }
                else{ // matlab ki bhai match kar rha hai to top wale ko hata do
                // and niche vale element ko compare karo
                    s.pop();
                }
            }
        }
      
      return (s.empty()==true);
        
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends