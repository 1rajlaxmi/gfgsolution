//{ Driver Code Starts
// Driver function
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    string reciprocalString(string S)
    {
        // Write Your code here
    int i,n;
    n=S.size();
    for(i=0;i<n;i++)
    {
        if(S[i]>='A' && S[i]<='Z')
        {
            S[i]='Z'-S[i]+'A';
        }
       if(S[i]>='a' && S[i]<='z')
        {
            S[i]='z'-S[i]+'a';
        }
    }
    return S;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    string S;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,S);
        Solution ob;
        string reciprocal = ob.reciprocalString(S);
        cout<< reciprocal <<endl;

    }

	return 0;
}
// } Driver Code Ends