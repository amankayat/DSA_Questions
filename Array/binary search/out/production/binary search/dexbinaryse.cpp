#include<iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int start = 0;
	int end = n-1;
	int mid,flag=0;
	while(start<=end){
		mid = start + (end- start)/2;
		if(a[mid]==k)
		{	flag=1;
			cout<<mid+1;
			break;
		}
		else if(a[mid]>k)
		start = mid+1;
		else
		end = mid-1;
		
	}
	if(flag==0)
	cout<<"element not found.";
}
