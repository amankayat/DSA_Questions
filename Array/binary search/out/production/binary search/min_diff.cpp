#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	int start  = 0;
	int end = start+1;
	while(start<=end){
		int mid = start + (end -start)/2;
		if(a[mid]==k){
			cout<<"min difference element: "<<a[mid];
		
			break;
		}
		else if(a[mid]<k)
		start = mid+1;
		else if(a[mid]>k)
		end = mid-1;
	}
	int min=0;
	if(abs(start - k)<abs(end - k))
	min = abs(start-k);
	else
	min = abs(end-k);
	
	cout<<"min difference element: "<<min;
}
