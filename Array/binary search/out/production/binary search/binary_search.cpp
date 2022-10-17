#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int x;
	cin>>x;
	
	int start = 0;
	int end = n-1;
	int flag=0;
	int  mid = (start+end)/2;
	
	while(start<=end){
		mid = start + (end - start)/2;
		if(a[mid]==x)
		{
			cout<<"element found at position..."<<mid;
			flag=1;
			break;
		}	
		
		 if(a[mid]<x)
		start = mid+1;
		else
		end = mid-1;
		
	
		
		
		
	}
	if(flag==0)
	cout<<"element not in the array..";
	
	
	
}
