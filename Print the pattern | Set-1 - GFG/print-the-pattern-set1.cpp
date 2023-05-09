//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
void printPat(int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
    printPat(n);
    cout<<endl;
	}
}
// } Driver Code Ends


/*You are required to complete this method*/
void printPat(int n)
{
//Your code here
int i,j,k,count=n,b=n,a=n;
for(i=n;i>=1;i--)
{
    for(j=n;j>=1;j--)
    {
        for(k=b;k>=1;k--)
        {
            cout<<count<<" ";
        }
        count--;
    }
    b--;
    count=a;
    cout<<"$";
}
}
