class Solution {
public:
    int singleNumber(vector<int>& nums) {
       
  vector<int>cnt(100);
  sort(nums.begin(),nums.end());

int n=nums.size();

if(n==1){
    return nums[0];
}
else{
int c=1;
for(int i=0;i<nums.size()-1;i++){
    if(nums[i]==nums[i+1]){
        c++;
    }
   else if(nums[i]!=nums[i+1]){
    cnt[c]=nums[i];
    c=1;
   }
}
if(nums[n-1]!=nums[n-2]){
    cnt[1]=nums[n-1];
}

}
return cnt[1];

        
    }
};