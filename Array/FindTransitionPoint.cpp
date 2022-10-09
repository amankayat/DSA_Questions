// C++ implementation to find
// the transition point
#include<iostream>
using namespace std;

// Function to find the transition point
int findTransitionPoint(int arr[], int n)
{
	//perform a linear search and
	// return the index of
	//first 1
	for(int i=0; i<n ;i++)
	if(arr[i]==1)
		return i;

	//if no element is 1
	return -1;
}

// Driver code
int main()
{
	int arr[] = {0, 0, 0, 0, 1, 1};
	int n = sizeof(arr) / sizeof(arr[0]);

	int point = findTransitionPoint(arr, n);

	point >= 0 ? cout << "Transition point is "
					<< point
		: cout<<"There is no transition point";
	return 0;
}
