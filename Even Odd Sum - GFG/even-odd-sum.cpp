//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> EvenOddSum(int N, int Arr[]) {
        // code here
        vector<int> ans;
        int i,esum=0,osum=0;
        for(i=0;i<N;i+=2)
        {
            osum=osum+Arr[i];
        }
        for(i=1;i<N;i+=2)
        {
            esum=esum+Arr[i];
        }
        ans.push_back(osum);
        ans.push_back(esum);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int Arr[N];
        for (int i = 0; i < N; i++) cin >> Arr[i];
        Solution ob;
        vector<int> ans = ob.EvenOddSum(N, Arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
}
// } Driver Code Ends