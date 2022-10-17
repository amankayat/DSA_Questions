#include<iostream>
using namespace std;
const int N = 100;
const int M = 100;
 int a[N][M];
void search2d(int a[][M],int n,int m,int k){
		int flag=0;
		int i=0;
	int j=m-1;
		while(i>=0 && i<n && j>=0 && j<m){
			if(a[i][j]==k){
				cout<<"element found at: "<<i<<" "<<j;
				flag=1;
				break;
			}
			else if(a[i][j]>k)
			j--;
			else if(a[i][j]<k)
			i++;
		}
	if(flag==0)
	cout<<"element not found";
		
	
}
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
		cin>>a[i][j];
	}
	
	
	search2d(a,n,m,k);

}
