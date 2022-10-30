#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    stack <int> solve(stack <int> &St , stack <int> &answer){

        if(St.empty()){

            return answer ;         

        }
        int element = St.top() ; 

        answer.push(element) ; 

        St.pop() ; 

        solve(St , answer) ;

        return answer ; 
    }

    void Reverse(stack<int> &St){
        stack <int> answer ;
        St = solve(St , answer) ; 
    }
};