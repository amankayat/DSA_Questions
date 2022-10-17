#include<iostream>
using namespace std;
void binarysrch(int a[],int start,int end,int k){
	int mid;
//	cout<<start<<" "<<end<<" ";
	while(start<=end){
		mid = start + (end- start)/2;
		if(a[mid]==k){
			cout<<"element found at index: "<<mid;
			break;
		}
		else if(a[mid]>k)
		end = mid-1;
		else
		start = mid+1;
	}
}

int main(){
	int n,k;
	cin>>n>>k;
	
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	int mid,next,previous,res=0;
	int start = 0;
	int end = n-1;
	while(start<=end){
	
		mid = start + (end-start)/2;
		next = (mid+1)%n;
		previous = (mid+n-1)%n;
		if(a[start]<=a[end])
		{
			res = start;
			break;
		}
		if(a[mid]<=a[next] && a[mid]<=a[previous]){
			
			res = mid;
			break;
		}
		else if(a[mid]>=a[start]){
		start = mid+1;
		}else if(a[mid] <= a[end])
		end = mid-1;
}
cout<<"res is: "<<res;
//cout<<"start is: "<<start<<"end is: "<<end;
binarysrch(a,0,res-1,k);
binarysrch(a,res,n-1,k);
}
