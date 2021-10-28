class Solution{
	
	
	public:
	int sumOfDistinct(int arr[], int n) 
	{ 
	    int sum = 0; 
	    for (int i = 0; i < n; i++) { 
	      
	        // If element appears first time 
	        if (arr[abs(arr[i]) - 1] >= 0) { 
	            sum += abs(arr[i]); 
	            arr[abs(arr[i]) - 1] *= -1; 
	        } 
	    } 
	    return sum; 
	} 
		 

};
