// Method-1
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a=0;
        int c=-1;
        int n=nums.size();
        for(int i=0;i<n;i++){
              for(int j=0;j<n;j++){
                  if(a==nums[j]){
                      c++;
                      swap(nums[i+c],nums[j]);
                  }

                  if(j==n-1){
                      a++;
                      i=i+c;
                      c=-1;
                  }
              }
        }
    }
};

//  Method-2

