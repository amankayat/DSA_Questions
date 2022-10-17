#include<iostream>
using namespace std;
void binarysrch(int a[],int start,int end,int k){
	int mid;
	while(start<=end){
		mid = start + (end-start)/2;
		if(a[mid]==k){
			
			cout<<"\nelement found at location: "<<mid;
			break;
		}
		else if(a[mid]>k)
		end = mid -1;
		else if(a[mid]<k)
		start = mid + 1;
		
	}
	
}

int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	int start = 0;
	int end = start+1;
	int i=2;
	int flag=0;
	while(a[end]<=k){
		
		if(a[end]==k)
		{
		cout<<"element found : "<<end;
		flag=1;
		break;	
		}
		
		start = end;
		end = end*i;
				
		
	}

	if(flag==0)
	binarysrch(a,start,end,k);
}
