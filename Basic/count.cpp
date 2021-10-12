Question
Given an array arr[] of distinct integers of size N and a value sum, the task is to find the count of triplets (i, j, k), having (i<j<k) with the sum of (arr[i] + arr[j] + arr[k]) smaller than the given value sum.
  
  
  Solution
  long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    sort(arr,arr+n);
	    int counttriplets=0;
	    for(int i=0;i<n-2;i++){
	        int start =i+1;
	        int end =n-1;
	        while(start<end){
	        if(arr[i]+arr[end]+arr[start]<sum){
	           counttriplets+=end-start;
	           start++;
	        }
	        else{
	            end--;
	        }
	        }
	    }
	    return counttriplets;
	}
