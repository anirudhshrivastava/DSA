//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        if(n==0 || m==0){
            return 0;
        }
        sort(a.begin(),a.end());
        if(m>n){
            return -1;
        }
        int mindiffer=INT_MAX;
        for(int i=0;i+m-1<n;i++){
            int diff=a[i+m-1]-a[i];
            if(diff<mindiffer){
                mindiffer=diff;
            }
        }
        return mindiffer;
    }   
};

//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends