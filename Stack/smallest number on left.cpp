
#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
        // code here
        vector<int> v;
        stack<int> st;
        for(int i=0;i<n;i++)
        {
           
                while(!st.empty() && st.top()>=a[i])
                st.pop();
                
            if(st.empty()==1)
            v.push_back(-1);
            else
            v.push_back(st.top());
                
            
            st.push(a[i]);
        }
        return v;
    }
};



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i < n;i++)
            cin>>a[i];
        
        Solution ob;
        vector<int> ans = ob.leftSmaller(n, a);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
