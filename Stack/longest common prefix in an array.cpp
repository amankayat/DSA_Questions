//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
   
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string ans="";
        int k=0,index;
        for(int i=0;i<N;i++)
        {   
            int sz=arr[i].size();
            if(sz>k)
            {   index=i;
                k=sz;
            }
        }
            for(int i=0;i<k;i++)
            {
                int temp=1;
        char ch=arr[index][i];
        //cout<<arr[i]<<endl;
            for(int j=0;j<N;j++)
            {
                if(ch!=arr[j][i])
                {
                    temp=0;
                }
            }
            if(temp==1)
            ans.push_back(ch);
            else
            break;
            
        }
        if(ans=="")
        ans+="-1";
        
        return ans;
        
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends