#include<stdio.h>







int main(){
	
	
	int a[]={1,22,345,66,78,55,26,11,85,3};
int i,j;
int temp;
	for(i=1;i<10;i++){
		
		for(j=0;j<10;j++){
			if(a[i]>a[j]){
				temp=a[i];
				
				a[i]=a[j];
				a[j]=temp;
				
			}
			
		}
		
	}
	for(i=0;i<10;i++){
		
		
		printf("%d\n",a[i]);
		
		
	}
	
	
	
	
}
