#include<stdio.h>



int main (){
	
	int n;
	long int fact=1;
	printf("Faktoriyeli giriniz.");
	scanf("%d",&n);
	
	while(n != 0){
		
		
		fact*=n;
		n--;
	}
	printf("%d faktoriyel",fact);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
