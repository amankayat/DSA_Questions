#include<iostream>
using namespace std;
int peak_element(int a[],int start,int end,int n){
	
		while(start<=end){
		int mid  = start + (end-start)/2;
		if(mid>0 && mid<n-1){
			if(a[mid+1]<a[mid] && a[mid-1]< a[mid]){
				return a[mid];
				
			}
			else if(a[mid+1]>a[mid])
			start = mid+1;
			else
			end = mid-1;
		}
		else if(mid==0){
			if(a[0]>a[1])
			return a[0];
			else
			return a[1];
		}
		else if(mid==n-1){
			if(a[n-1]>a[n-2])
		return a[n-1];
			else
			return a[n-2];
		}
		
	}
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int start = 0;
	int end = n-1;
int index = peak_element(a,start,end,n);

}
