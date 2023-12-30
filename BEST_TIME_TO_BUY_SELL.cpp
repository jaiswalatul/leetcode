class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mina=INT_MAX;
        int ans=0;
        
       
       for(int i=0;i<n;i++){
          
               mina=min(prices[i],mina);
               ans=max(ans,prices[i]-mina);
          
       }

      
        return ans;
    }
};


//***************Method-2(TLE)**************

int maxPro = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
            maxPro = max(arr[j] - arr[i], maxPro);
            }
        }
        }

    return maxPro;9+