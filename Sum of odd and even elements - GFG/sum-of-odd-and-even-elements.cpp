//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
		vector<int> find_sum(int n)
		{
		    // Code here
		    int i,odd=0,even=0;
		    for(i=1;i<=n;i+=2)
		    {
		        odd=odd+i;
		    }
		    for(i=2;i<=n;i+=2)
		    {
		        even=even+i;
		    }
		    vector<int> num={odd,even};
		    return num;

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
    	vector<int> ans = ob.find_sum(n);
    	for(auto i: ans)
    		cout << i << " ";
    	cout<<"\n";
    }
	return 0;
}
// } Driver Code Ends