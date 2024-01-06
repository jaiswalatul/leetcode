class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n = arr.size(); // size of the given array.
    unordered_map<int,int>mpp;
    // map[presum,count]
    int preSum = 0, cnt = 0;

    mpp[0] = 1; // add (0,1)in the map becos it for presum==k
    for (int i = 0; i < n; i++) {
        // add current element to prefix Sum:
        preSum += arr[i];

        // Calculate x-k:
        int remove = preSum - k;

        // Add the number of subarrays to be removed:
        cnt += mpp[remove];

        // Update the count of prefix sum
        // in the map.
        mpp[preSum] += 1;
    }
    return cnt;

    }
};

// Baki all the method not completed the tewst cases

// method -2

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int c=0;
        
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size();j++){
                sum=sum+nums[j];
                    if(sum==k){
                       c++;
                    }
                }
        }
        return c;
    }
};