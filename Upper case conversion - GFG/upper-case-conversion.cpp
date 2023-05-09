//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string transform(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<transform(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends



string transform(string s)
{
    // code here
    int i,n;
    n=s.size();
    for(i=0;i<n;i++)
    {
        if(s[i]==' ')
        {
            s[i+1]=s[i+1]-32;
        }
        
    }
    if(s[0]>=97 && s[0]<=122)
        {
            s[0]=s[0]-32;
        }
    return s;
}