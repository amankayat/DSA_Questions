//Aman//
#include<iostream>
using namespace std;
int occurance(long long int a[],int start,int end,int k,int flag){
	
	int mid ;
	int res =-1;
	while(start<=end){
		mid = start + (end - start)/2;
		if(a[mid]==k){
			
			if(flag==1){
				res = mid;
				end = mid-1;
				
				
			}else{
				res = mid;
				start = mid+1;
				
			}
		}
		else if(a[mid]<k)
		start = mid+1;
		else
		end = mid-1;
	}
	return res;
}

int main(){
	int n,k;
	
	cin>>n>>k;
	long long int a[n];
	for(long long int i=0;i<n;i++)
	cin>>a[i];
	
	int start = 0;
	int end = n-1;
	
	int first = occurance(a,start,end,k,1);
	int last = occurance(a,start,end,k,0);
	cout<<first+1<<" "<<last+1<<" "<<(last-first)+1;


	
}

//timecomplexity//
//O(log(n))
