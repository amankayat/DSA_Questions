#include<iostream>
using namespace std;

//largest element less than number

int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	int start = 0;
	int end = n-1;
	int mid,res;
	while(start<=end){
		mid = start + (end-start)/2;
		if(a[mid]==k)
		{
			cout<<"floor of the element found at:"<<mid;
			break;
		}
		if(a[mid]>k){
			end = mid-1;
		}
		if(a[mid]<k){
			res = mid;
			start = mid+1;
		}
		
		
//		if(start>end)
//	cout<<"floor of the element found at: "<<res;

	}
	cout<<"floor of the element found at: "<<res;

}
