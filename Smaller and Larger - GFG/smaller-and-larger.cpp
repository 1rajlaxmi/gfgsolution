//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> getMoreAndLess(int arr[], int n, int x) {
	    // code here
	    vector<int> num;
	    int i,c1=0,c2=0;
	    for(i=0;i<n;i++)
	    {
	        if(arr[i]<=x)
	        {
	            c1++;
	        }
	       if(arr[i]>=x)
	        {
	            c2++;
	        }
	    }
	    num.push_back(c1);
	    num.push_back(c2);
	    return num;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMoreAndLess(arr, n, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}

// } Driver Code Ends