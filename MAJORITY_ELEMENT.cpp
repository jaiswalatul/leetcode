class Solution {
    public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int max=-1;
        int ans =0;
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]]>max){
                max=m[nums[i]];
                cout<<nums[i];
                ans=nums[i];
            }
        }
        return ans;

    }
};

// $$$$$$$$$$$$$$$$$$$$$$$   Method-2   $$$$$$$$$$$$$$$

class Solution {
    public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
       int ele=0;
       int cnt=0;
        for(int i=0;i<n;i++){
           
           if(cnt==0){
            ele=nums[i];
           
           }
           if(ele==nums[i]){
               cnt++;
           }
           else{
               cnt--;
           }
           cout<<ele<<"$"<<cnt<<endl;
        } 
    
          int cnt1=0;
        for(int j=0;j<n;j++){
            if(ele==nums[j]){
                cnt1++;
            }
        }

        if(cnt1>n/2){
            return ele;
        }
        else{
            return -1;
        }
       
    }
};