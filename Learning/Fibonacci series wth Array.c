#include<stdio.h>
int main(){
	int n,i=2;
	scanf("%d",&n);
	
	int fib[n];
	
fib[0]=0; fib[1]=1;
	for(;i<n;i++){
	fib[i]=fib[i-2]+fib[i-1];
	}
	int j;
	for(j=0;j<n;j++){
		printf("%d  ",fib[j]);
	}
	
	
	
	
	
	
	
	
	return 0;
}
