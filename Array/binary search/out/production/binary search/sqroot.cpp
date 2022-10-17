#include<iostream>
using namespace std;
int main(){
	int x;
	cin>>x;
	int start =1;
	int end=x;
	int flag=0;
	while(start<=end){
		int mid = (start+end)/2;
		if((mid*mid)==x){
			cout<<mid;
			flag=1;
			break;
		}
		else if((mid*mid)>x)
		end = mid-1;
		else
		start = mid+1;
	}
	if(flag==0)
	cout<<start-1;
}
