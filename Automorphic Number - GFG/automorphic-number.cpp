//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
		string is_AutomorphicNumber(int n)
		{
		    // Code here
		    int num=n*n;
		    int x=n;
		    int i,d=0,rem,ans=0;
		    while(n!=0)
		    {
		        n=n/10;
		        d++;
		    }
		    for(i=0;i<d;i++)
		    {
		        rem=num%10;
		        ans=ans+rem*pow(10,i);
		        num=num/10;
		    }
		    //cout<<ans<<x;
		    if(ans==x)
		    {
		        return "Automorphic";
		    }
		    else
		    {
		        return "Not Automorphic";
		    }
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_AutomorphicNumber(n);
    	cout << ans <<"\n";
    }
	return 0;
}
// } Driver Code Ends