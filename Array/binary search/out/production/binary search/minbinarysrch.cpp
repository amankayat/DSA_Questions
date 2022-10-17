#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	int start = 0;
	int end = n-1;
	int mid;
	int prev,next;
	while(start<=end){
		mid = start + (end - start)/2;
		prev = (mid+n-1)%n;
		next = (mid+1)%n;
//		cout<<prev<<" "<<next;
		if(a[start]<=a[end])
		{
				cout<<start;
			break;
		}
		if(a[mid]<=a[prev] && a[mid]<=a[next] ){
			cout<<mid;
			break;
		}
		else if(a[mid]>=a[start]){
			start = mid+1;
		}
		else if(a[mid]<= a[end])
		end = mid-1;
		
	
	}
}
