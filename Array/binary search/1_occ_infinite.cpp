#include<iostream>
using namespace std;
int binarysrch(int a[],int start ,int end){
	int res;
	int mid;
	while(start<=end){
		mid = start + (end - start)/2;
		if(a[mid]==1){
			res = mid;
			end = mid-1;
		}
		else if(a[mid]>1)
		end = mid-1;
		else if(a[mid]<1)
		start = mid+1;
		
	}
	return res;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	
	int start = 0;
	int end = start+1;
	int i=2;
	while(a[end] == 0){
		start = end;
		end = end * i;
//		i=i*2;
	
	}
//	cout<<"start is: "<<start<<" end is: "<<end;
	cout<<"first occurrence of 1 at index: "<<binarysrch(a,start,end);
}
