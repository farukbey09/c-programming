#include<stdio.h>





int main(){
	
	int num1,num2,res;
	char oper;
	
	scanf("%c",&oper);
	switch(oper){
		case'+':
			scanf("%d %d",&num1,&num2);
		
		res=num1+num2;
		printf("%d",res);
		
		break;
		
	
	
		

		case'-':
			scanf("%d %d",&num1,&num2);
		
		res=num1-num2;
		printf("%d",res);
		
		break;

		case'/':
			scanf("%d %d",&num1,&num2);
		
		res=num1/num2;
		printf("%d",res);
		
		break;
		
	
		case'*':
			scanf("%d %d",&num1,&num2);
		
		res=num1*num2;
		printf("%d",res);
		
		break;
		
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
