//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isPerfect(int N) {
        // code here
        int num=N,i,rem,fact=1,sum=0;
        while(num!=0)
        {
            rem=num%10;
            for(i=1;i<=rem;i++)
            {
                fact=fact*i;
            }
            sum=sum+fact;
            num=num/10;
            fact=1;
        }
        if(sum==N)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isPerfect(N) << "\n";
    }
}

// } Driver Code Ends