// Method-1

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        unordered_set<int>s;

        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }

        for(int i=1;i<INT_MAX;i++){
            if(s.find(i)==s.end()){
                ans=i;
                break;
            }
        }

        return ans;
    }
};

// Method-2


class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        // if(nums[0] > 1) return 1;

        int ans = 1;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == ans) {
                ans++;
            }
        }
        return ans;
    }
};

//  Method -3




