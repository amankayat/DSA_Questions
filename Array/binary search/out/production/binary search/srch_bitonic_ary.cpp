#include<iostream>
using namespace std;
int peakelement(int a[],int start,int end,int n){
	int res = -1;
	while(start<=end){
		int mid = start + (end-start)/2;
		if(mid>0 && mid< n-1){
			if(a[mid]>a[mid+1] && a[mid]>a[mid-1]){
				res  = mid;
				break;
			}
			else if(a[mid]<a[mid+1])
			start = mid+1;
			else
			end = mid-1;
		}else if(mid==0){
			if(a[0]>a[1])
			{
				res = 0;
				break;
			}else{
				res = 1;
				break;
			}
		}else if(mid==n-1){
			if(a[n-1]>a[n-1]){
				res = n-1;
				break;
			}else{
				res = n-2;
				break;
			}
		}
	}
	return res;
}
int binarysrch_asc(int a[],int start,int end,int k){
	int res =-1;
	while(start<=end){
		int mid = start + (end-start)/2;
		if(a[mid]==k)
		{
		return mid;
		}
		else if(a[mid] < k)
		start = mid+1;
		else 
		end = mid-1;
	}
	return res;
//if(res>=0)
//	return res;
//	else
//	return -1;
}
int binarysrch_dsc(int a[],int start,int end,int k){
	int res=-1;
	while(start<=end){
		int mid = start + (end - start)/2;
		if(a[mid]==k)
		{return mid;
		}
		else if(a[mid]  > k)
		start = mid+1;
		else 
		end = mid-1;
	}
	return res;
//	if(res>=0)
//	return res;
//	else
//	return -1;
}
int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	int index = peakelement(a,0,n-1,n);
	
	int x1 = binarysrch_asc(a,0,index-1,k);
	int x2 = binarysrch_dsc(a,index,n-1,k);
	
if(x1==x2)
cout<<"element not found";
if(x1>x2)
cout<<"element found at: "<<x1;
else if(x2>x1)
cout<<"element found at: "<<x2;

}
