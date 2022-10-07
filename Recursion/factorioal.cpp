#include<stdio.h>
long long int factorial(int n){
	if(n==0)
	return 1;
	
	return n*factorial(n-1);
}
int main(){
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	printf("factorial of the number is: ");
	printf("%d",factorial(n));
}
