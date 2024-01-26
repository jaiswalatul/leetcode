int lowerBound(vector<int> nums, int n, int target) {
	// Write your code here
	
        int s=0;
        int e=n-1;
        int mid=(s+e)/2;
		int idx=n;
        while(s<=e){
            if(nums[mid]<target){
                s=mid+1;
            }
            else if (nums[mid]>=target){
                e=mid-1;
				idx=mid;
            }
            
            mid=(s+e)/2;
        }
    
	return idx;
}

//Method-2

int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int i;
	for(i=0;i<n;i++){
		if(arr[i]>=x){
			return i;
		}
	}
	return i;
}
