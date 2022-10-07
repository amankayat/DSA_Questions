#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t>0){
		int a,b;
		cin>>a>>b;
		int i=1;
		while(a>0 || b>0){
			if(a%2 != b%2){
				cout<<i;
				break;
			}
			a/=2;
			b/=2;
			i++;
		}
		
		t--;
	}
}
