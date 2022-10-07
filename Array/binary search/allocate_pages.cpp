#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isvalid(int a[],int n,int k,int mx){
	int st = 1;
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
		if(sum>mx){
			st++;
			sum = a[i];
		}
		if(st>k)
		return false;
	}
	return true;
	
}

int allocate_pages(int a[],int n,int k){
	int start = a[0];//max of array
	int end=a[0];//sum of array
	
	int res = -1;
	//find sum and max
	for(int i=0;i<n;i++)
	{
		end+=a[i];
		if(a[i]>start)
		start = a[i];
	}
	while(start<=end){
		int mid = start+(end-start)/2;
		
		if(isvalid(a,n,k,mid)){
			res=mid;
			end = mid-1;
		}else
		start = mid+1;
			
	}
	return res;
	
}
int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	
	cout<<allocate_pages(a,n,k);
}
