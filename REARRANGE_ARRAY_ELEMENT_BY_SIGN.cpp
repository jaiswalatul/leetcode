class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>ans(n,0);

        int posidx=0;
        int negidx=1;

        for(int i=0;i<n;i++){
             
             if(nums[i]>0){
                 ans[posidx]=nums[i];
                 posidx+=2;
             }
             else{
                 ans[negidx]=nums[i];
                 negidx+=2;
             }
        }


       return ans;

    }
};


//&***************Method-2******************8

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>pos(n);
        vector<int>neg(n);
        pos.clear();
        neg.clear();

        for(int i=0;i<n;i++){
            if(nums[i]>0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }


        int i=0;
        nums.clear();

        while(i<n/2){
            nums.push_back(pos[i]);
            nums.push_back(neg[i]);
            i++;
        }

       return nums;





        
    }
};