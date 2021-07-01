#include<stdio.h>
// Formül (n^2)+(n-1^2)+....+1
int kare (int);



int main(){
	
	
	int x;
	printf("kac nxn lik kare oldugunu yaziniz");
	scanf("%d",&x);
	printf("kare sayisi %d",kare(x));
	
	
	return 0;
}int kare(int n){
	
	if(n==0)
	return 0;
	
	return (n*n)+kare(n-1);
	
}
