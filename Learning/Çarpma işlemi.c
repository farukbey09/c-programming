#include<stdio.h>
#define p printf
int carp(int a,int b,int c){
	
	if(b>=1){
	c=c+a;
	b--;
	return carp(a,b,c);
	}
	else
	return c;
}

int main(void){
	int a,b;
	int c=0;
	p("please enter 2 number that you want to multiply\n");
	scanf("%d %d",&a,&b);
	printf("%d",carp(a,b,c));
	

	
	return 0;
}

