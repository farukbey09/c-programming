#include<stdio.h>






int main(){
	
	
	
	int i,j,n,flag;
	scanf("%d",&n);
printf("2 ");
	for(i=3;i<n;i++){
		 
 flag=0;		 
		 for(j=2;j<i;j++){
		 	
		 	
		 	if(i%j==0){
			flag++; 
		 	break;
		 
		 }
		
		
		
	}
	
	if(flag==0){
		printf("%d ",i);
	}
	
	
}
	
	
	
	
	return 0;
}
