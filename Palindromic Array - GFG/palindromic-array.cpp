//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int reverse(int n){
        int reverse=0;
    	while(n>0){
    	    int x=n%10;
    	    reverse=reverse*10 + x;
    	    n=n/10;
    	}
    	return reverse;
    }
    int PalinArray(int a[], int n)
    {
    	// code here
    for(int i=0;i<n;i++){
        int check=reverse(a[i]);
        if(a[i]==check){
            continue;
        }
        else{
            return 0;
        }
    }
   return 1;
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
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends