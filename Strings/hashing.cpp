#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int hash[26] = {0};
	for(int i=0;i<str.length();i++){
		hash[str[i] - 'a']++;
	}
	
	//display
	
	for(int i=0;i<26;i++)
	cout<<hash[i]<<" ";
}
