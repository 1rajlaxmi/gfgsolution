//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void printFloydTriangle(int N)
    {
        // Write Your Code here
        int i,j,c=1;
        for(i=1;i<=N;i++)
        {
            for(j=1;j<=i;j++)
            {
                cout<<c<<" ";
                
                c++;
            }
            cout<<endl;
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        ob.printFloydTriangle(N);
    }
    return 0;
}
// } Driver Code Ends