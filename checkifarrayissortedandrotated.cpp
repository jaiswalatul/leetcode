class Solution {
public:
    bool check(vector<int>& nums) {
        
        int x=0;
        int n=nums.size();
        vector<int>k(n,0);
        vector<int>b(n,0);
        k=nums;
        sort(k.begin(),k.end());
        
        while(x!=nums.size()){
            for(int i=0;i<nums.size();i++){
                b[i]=nums[(x+i)%nums.size()];
            }

            if(b==k){
                return true;
                break;
            }
            else{
                x++;
            }
        }

        return false;
    }
};