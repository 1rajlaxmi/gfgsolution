//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        // code here
        int f=INT_MAX,ans=0;
        unordered_map<int,int> mm;
        for(int i=0;i<n;i++)
        {
            mm[arr[i]]++;//value and frequency map
        }
        for(auto x:mm)//Go one by one to the map
        {
            if(x.second<f)
            {
                ans=x.first;
                f=x.second;
            }
            else if(x.second==f)
            {
                ans=max(ans,x.first);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends