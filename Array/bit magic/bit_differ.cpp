#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int k=0,l=0,count=0;
	int arr[128]={0},brr[128]={0};
	while(a>0){
		if(a%2!=0)
		{
			arr[k] = 1;
			k++;
		}else
		{
			arr[k] = 0;
			k++;
		}
		a/=2;
	}
		while(b>0){
		if(b%2!=0)
		{
			brr[l] = 1;
			l++;
		}else
		{
			brr[l] = 0;
			l++;
		}
		b/=2;
	}
	int max;
if(l<k)
max=k;
else
max=l;
	
//	cout<<"\n";
	for(int i=0;i<max;i++){
		if(arr[i]!=brr[i])
		count++;
	}
	cout<<count;
}
