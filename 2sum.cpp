class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
       unordered_map<int,int>m;
      int n=nums.size();
       for(int i=0;i<n;i++){
            
            int num=nums[i];
            int more=target-num;
           if(m.find(more)!=m.end()){
               return {m[more] , i};
           }
          m.insert({num,i});
       }

       return {};

    }
};

// Method -2

class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        
        vector<int>v;
        int n=a.size();
        for(int i=0;i<n;i++){  
            for(int j=i+1;j<n;j++){
                if(a[i]+a[j]==target){
                   return {i,j};
                }
            }
        }

        return {};
    }
};
