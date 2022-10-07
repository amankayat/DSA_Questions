#include<iostream>
using namespace std;
int main(){
	int n;
	char k;
	cin>>n>>k;
	char a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	char res = '#';
	int start =0;
	int end = n-1;
	while(start<=end){
		int mid = start + (end - start)/2;
		if(a[mid]==k)
		start = mid+1;
		
		else if(k>a[mid])
		start = mid+1;
		else if(a[mid]>k){
			res = a[mid];
			end = mid-1;
		}
	}
	if(res=='#')
	cout<<"ceil of the element not found.";
	else
	cout<<"next character is: "<<res;
}
