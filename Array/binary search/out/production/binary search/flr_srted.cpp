#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int floor_ary(int a[],int n,int k){
	int start = 0;
	int end = n-1;
	int res =-1;
	while(start<=end){
		int mid = start + (end-start)/2;
		if(a[mid]==k){
			return mid;
		}else if(a[mid]<k)
		start = mid+1;
		else
		end = mid-1;
		
	}
	if(start==0)
	return res;
	else
	return start-1;
}

int main(){
	int n,x;
	cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	cout<<floor_ary(a,n,x);
	
}
