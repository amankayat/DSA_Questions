#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int square_root(int x){
	int start = 0;
	int end = x-1;
	while(start<=end){
		int mid = start + (end-start)/2;
		if(mid*mid == x){
			return mid;
		
		}
		else if(mid*mid > x)
		end = mid-1;
		else{
			if((mid+1)*(mid+1) >= x)
			return mid;
			else
			start = mid+1;
			
		}
		
	}
}

int main(){
	int x;
	cin>>x;
	cout<<square_root(x);
	
}
