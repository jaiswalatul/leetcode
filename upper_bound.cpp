int upperBound(vector<int> &nums, int target, int n){
	// Write your code here.
	
	 int s=0;
        int e=n-1;
        int mid=(s+e)/2;
		int idx=n;
        while(s<=e){
            if(nums[mid]>target){
                idx=mid;
				e=mid-1;
            }
            else if (nums[mid]<=target){
                s=mid+1;
			
            }
            
            mid=(s+e)/2;
        }
    
	return idx;
}
	
