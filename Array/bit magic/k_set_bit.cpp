#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	
//	int a[32];
//	int j=1;
//	while(n>0){
//		if(n%2!=0)
//		{a[j] = 1;
//		j++;
//		}
//		else
//		{
//			a[j] = 0;
//		j++;
//		}
//		n=n/2;
//	}
//	if(a[k]==1)
//	cout<<"yes";
//	else
//	cout<<"no";

if(k==0)
{
	if(n&1==1)
	cout<<"yes";
	else
	cout<<"NO";
}else{
//	cout<<(1<<k)<<" "<<(4&n);
	if(((1<<k)&n)!=0)
	cout<<"yes";
	else
	cout<<"no";
}

}
