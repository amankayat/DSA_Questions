#include<iostream>
#include<bits/stdc++.h>
// #include <boost/multiprecision/cpp_int.hpp>
// using namespace boost::multiprecision;
using namespace std;

int fact(int n){
	if(n==0 || n==1)
	 return 1;
	
	return n*fact(n-1);
}

int main(){
	
	int num;
	cin>>num;
	cout<<fact(num);
}