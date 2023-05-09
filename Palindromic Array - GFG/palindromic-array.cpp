//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	int i,rem,rev=0,num,count=0;
    	for(i=0;i<n;i++)
    	{ 
    	    num=a[i];
    	    while(num!=0)
    	    { 
    	         rem=num%10;
    	         rev=rev*10+rem;
    	         num=num/10;
    	        
    	    }
    	    if(a[i]!=rev)
    	    {
    	        count++;
    	    }
    	    
    	    rev =0;
    	    
    	}
        if (count>0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
        
    
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends