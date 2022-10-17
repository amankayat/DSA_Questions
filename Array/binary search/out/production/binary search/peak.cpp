#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int peak_element(int a[],int n){
	int start = 0;
	int end = n-1;
	while(start<=end){
		int mid = start +(end-start)/2;
		if(mid>0 && mid<n-1){
			if(a[mid]>a[mid+1] && a[mid]>a[mid-1]){
				return mid;
			}
			else if(a[mid+1] > a[mid])
			start = mid+1;
			else if(a[mid-1]>a[mid])
			end = mid-1;
		}else if(mid==0){
			if(a[mid] > a[mid+1])
			return mid;
			else
			return 1;
		}else if(mid ==n-1){
			if(a[n-1] > a[n-2])
			return n-1;
			else
			return n-2;
		}
	}
	
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	cout<<peak_element(a,n);
}
