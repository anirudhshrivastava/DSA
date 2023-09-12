//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
   public:
    int findSum(int arr[], int N)
    {
    	//code here.
    /*	sort(A,A+N);
    	int sum=A[0]+A[N-1];
    	return sum;*/
    	int sum=0;
    	int min=INT_MAX;
    	int max=INT_MIN;
    	for(int i=0;i<N;i++){
    	    if(arr[i]>max){
    	        max=arr[i];
    	    }
    	    if(arr[i]<min){
    	        min=arr[i];
    	    }
    	}
    //	for(int i=0;i<N;i++){
    	    
    //	}
    	sum=max+min;
    	
    }

};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends