//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int sumOfDigits(int N){
        //code here
        int rem,sum=0;
        while(N>0)
        {
            rem=N%10;
            sum=sum+rem;
            N=N/10;
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.sumOfDigits(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends