#include<stdio.h>



int main(){
int a,i=0,res,c=0;
scanf("%d",&a);
while(i==0){
	
	
	res=a%10;
	printf("%d",res);
	a/=10;
	c++;
	if(a==0)
	i++;
	
	
}
	
	
	printf("and also ve have digit of the number : %d",c);
	
	
	
	
	
	
	
	
	
return 0;
}
