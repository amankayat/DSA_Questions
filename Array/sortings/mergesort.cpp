#include<bits/stdc++.h>
using namespace std;

void Merge(int ar[],int l,int mid,int r){
	int n1 = mid-l+1;
	int n2 = r-mid;

	//temp array
	int a[n1],b[n2];
	for(int i=0;i<n1;i++)
		a[i] = ar[l+i];

	for(int i=0;i<n1;i++)
		b[i] = ar[mid+1+i];

	int i=0,k=l,j=0;
	while(i<n1 && j<n2){
		if(a[i] < b[j]){
			ar[k] = a[i];
			k++;i++;
		}else{
			ar[k] = b[j];
			k++;j++;
		}
	}
	while(i<n1){
		ar[k] = a[i];
			k++;i++;
	}
	while(j<n2){
		ar[k] = b[j];
			k++;j++;
	}
}

void mergesort(int ar[],int l,int r){
	if(l<r){
		int mid = (l+r)/2;
		mergesort(ar,l,mid);
		mergesort(ar,mid+1,r);
		Merge(ar,l,mid,r);
	}
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];

	mergesort(a,0,n-1);
	//display
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\n";
}