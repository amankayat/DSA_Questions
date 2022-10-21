//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        stack<pair<long long,int>> st;
        vector<long long> vec1;
        int k=-1;
        for(int i=0;i<n;i++)
        {  
            while(!st.empty() && st.top().first>=arr[i])
             {st.pop();
             
             }
             if(st.empty())
             {
                 vec1.push_back(k);
             }
             else
             vec1.push_back(st.top().second);
             
            st.push({arr[i],i});
            
        }
         stack<pair<long long,int>> st1;
        vector<long long> vec2;
         
        for(int i=n-1;i>=0;i--)
        {  
            while(!st1.empty() && st1.top().first>=arr[i])
             {st1.pop();
             
             }
             if(st1.empty())
             {
                 vec2.push_back(n);
             }
             else
             vec2.push_back(st1.top().second);
             
            st1.push({arr[i],i});
            
        }
        vector<long long> v;
        reverse(vec2.begin(),vec2.end());
        
        for(int i=0;i<n;i++)
        v.push_back(vec2[i]-vec1[i]-1);
        vector<long long> final;
        for(int i=0;i<n;i++)
        {
            final.push_back(v[i]*arr[i]);
            
        }
        long long mx=final[0];
        for(int i=0;i<n;i++)
        {   //cout<<vec2[i]<<" ";
            if(final[i]>mx)
            mx=final[i];
        }
        return mx;
        
        
        
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
    return 0;
}

// } Driver Code Ends