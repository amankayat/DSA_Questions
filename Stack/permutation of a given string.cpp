//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
     vector<string> vec;
         void permut(string s,string a)
         {  
             if(s.size()==0)
             {
                 vec.push_back(a);
                
             }
             for(int i=0;i<s.size();i++)
             {
                 char ch=s[i];
                 string left=s.substr(0,i);
                 string right=s.substr(i+1);
                 string result=left+right;
                 permut(result,a+ch);
             }
         }
        vector<string>find_permutation(string S)
        {
            // Code here there
           
           permut(S,"");
           set<string> st; 
           for(int i=0;i<vec.size();i++)
           st.insert(vec[i]);
           vector<string> v;
           for(auto it:st)
            v.push_back(it);
            return v;
        }
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        vector<string> ans = ob.find_permutation(S);
        for(auto i: ans)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

// } Driver Code Ends