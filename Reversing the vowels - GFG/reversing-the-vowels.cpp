//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        string modify (string s)
        {
            //code here.
            int i,n;
            n=s.size();
            string temp="";
            for(i=0;i<n;i++)
            {
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                {
                 
                 temp+=s[i];
                    
                }
            }
            
            int k=temp.size()-1;
             for(i=0;i<n;i++)
            {
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                {
                 
                 s[i]=temp[k];
                 k--;
                    
                }
            }
            
            return s;
            
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
        cout <<ob.modify (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends