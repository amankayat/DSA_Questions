#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		int i=1;
		while(n>0){
			if(n%2!=0)
			{
				cout<<i;
				break;
			}
			i++;
			n=n/2;
			}
			t--;
			}
}
