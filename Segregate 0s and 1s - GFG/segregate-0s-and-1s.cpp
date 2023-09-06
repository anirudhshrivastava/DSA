//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        // code here
        //sort(arr,arr+n);
       /* int temp[n];
        int j=0;
        
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                temp[j++]=arr[i];
            }
        }
          for(int i=0;i<n;i++){
            if(arr[i]==1){
                temp[j++]=arr[i];
            }
        }
        memcpy(arr,temp,sizeof(temp));
        */
        int low=0;
        int mid=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                swap(arr[mid],arr[low]);
                low++;
                mid++;
            }
            else if(arr[i]==1){
                mid++;
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.segregate0and1(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends