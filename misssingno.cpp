  #include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int>nums;
    nums={0,1};
    int n=nums.size();

    int c=0;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        if(nums[i]!=c){
            cout<<nums[i]-1;
            c++;
        }
        c++;
    }

    cout<<nums.size();
    

    return 0;
}