#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int min_num(int a[],int n){
	int start = 0;
	int end = n-1;
	while(start<end){
		int mid = start +(end-start)/2;
		if(a[mid]<a[end])
		end = mid;
		else
		start = mid+1;
	}
	return a[start];
	
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	cout<<min_num(a,n);
}
