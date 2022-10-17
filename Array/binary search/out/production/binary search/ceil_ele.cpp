#include<iostream>

//smallest element greater than number

using namespace std;
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
		mid = start + (end - start)/2;
		if(a[mid] == k){
			cout<<"ceil of the element at index: "<<mid;
		}
		else if(a[mid]<k)
		start = mid+1;
		else if(a[mid]>k){
			res = mid;
			end = mid-1;
		}
	}
	cout<<"ceil of the element at index : "<<res;

}
