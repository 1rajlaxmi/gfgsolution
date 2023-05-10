//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
  public:   
    int countCamelCase (string s)
    {
    	//code here.
    	int i,c=0,n;
        n=s.length();
    	for(i=0;i<n;i++)
    	{
    	if(s[i]>=65 && s[i]<=90)
    	{
    	    c++;
    	}
    	}
    	return c;
    }
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout <<ob.countCamelCase (s) << '\n';
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends