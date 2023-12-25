// Method-1 : out of 210/200 test case passed 

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MIN;
        int temp=-1;
        vector<int>v;
        for (int i=0;i<n;i++){
             int sum=0;
            for(int j=i;j<n;j++){
                temp=sum;
                sum=sum+nums[j];
              
                ans=max(ans,sum);
                cout<<ans<<"  ";
            }
            // ans=max(temp,sum);
            // cout<<ans;
           v.push_back(ans);
        }
      
      int max=INT_MIN;
      for(int i=0;i<nums.size();i++){
          if(max<v[i]){
              max=v[i];
          }
        cout<<v[i]<<" ";
      }
      return max;
    }
};

// Mehod-2 (kadane's algorithm)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>maxi){
                maxi=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};

