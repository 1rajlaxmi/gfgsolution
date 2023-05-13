//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	vector<string> pattern(string S)
	{
	    // Your code goes here
	    int i,n,j;
	    n=S.size();
	    string mys;
	    vector<string> str;
	    for(i=(n-1);i>=0;i--)
	    {
	        for(j=0;j<=i;j++)
	        {
	            mys=mys+S[j];   	        
	         }
	         str.push_back(mys);
	         mys.erase();
    	}
	    return str;
	}

};

//{ Driver Code Starts.

int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   		Solution ob;

   		vector<string> ans = ob.pattern(s);

   		for(int i = 0; i < ans.size(); i++)
   			cout << ans[i] << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends