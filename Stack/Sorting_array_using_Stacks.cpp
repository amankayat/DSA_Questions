
// C++ program to sort an array using stack
#include <bits/stdc++.h>
using namespace std;
 
// This function return the sorted stack
stack<int> sortStack(stack<int> input)
{
    stack<int> tmpStack;
 
    while (!input.empty())
    {
        // pop out the first element
        int tmp = input.top();
        input.pop();
 
        // while temporary stack is not empty
        // and top of stack is smaller than temp
        while (!tmpStack.empty() &&
                tmpStack.top() < tmp)
        {
            // pop from temporary stack and
            // push it to the input stack
            input.push(tmpStack.top());
            tmpStack.pop();
        }
 
        // push temp in temporary of stack
        tmpStack.push(tmp);
    }
 
    return tmpStack;
}
 
void sortArrayUsingStacks(int arr[], int n)
{
    // Push array elements to stack
    stack<int> input;
    for (int i=0; i<n; i++)
       input.push(arr[i]);
 
    // Sort the temporary stack
    stack<int> tmpStack = sortStack(input);
 
    // Put stack elements in arrp[]
    for (int i=0; i<n; i++)
    {
        arr[i] = tmpStack.top();
        tmpStack.pop();
    }
}
 
// main function
int main()
{   
    cout<<"Enter the number of elements:";
    int n;
    cin>>n;
    cout<<"Enter the elements:";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
 
    sortArrayUsingStacks(arr, n);
 
    for (int i=0; i<n; i++)
       cout << arr[i] << " ";
 
    return 0;
}


