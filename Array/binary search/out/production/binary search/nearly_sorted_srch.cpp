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
	int mid;
	int flag=0;
	while(start<=end){
		mid =start +(end-start)/2;
		if(a[mid]==k||a[mid+1]==k||a[mid-1]==k){
			if(a[mid]==k){
				cout<<"element found at index: "<<mid;
				flag=1;
				break;
			}
			else if(a[mid+1]==k){
				cout<<"element found at index: "<<mid+1;
				flag=1;
				break;
			}
			else if(a[mid-1]==k){
				cout<<"element found at index: "<<mid-1;
				flag=1;
				break;
			}
		}
		else if(a[mid]<k)
		start = mid+2;
		else
		end = mid-2;
	}
}
