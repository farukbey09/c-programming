#include<stdio.h>
/* ��MD� BURDA SELECT�ON SHORTUN MANTIGI  EN K���K �NDEKSTEN BA�LAR VE
 S�REKL� EN K��K SE�T�G� SAYIYI �NDEKSE ATAR SONRA �NDEKS B�R ARTAR TEKRAR GER� KALAN SAYILAR ARASINDA TEKRAR EN K�����N� SE�ER TEKAR  O �NDEKSE ARTAR VE ��LEM S�REKL� 
 TEKRAR TEKRAR ��LEM� YAPARAK SIRALAR D�Z�Y�
�RN A[]={1,3,2}
A[0]=1 ��NK� EN K���K O
A[1]=2 ��NK� EN K���K O
A[2]=3 ��NK� EN K���K O
*/

int main(){
	
	int a[10];
	int min,temp;
	int i,j;
	for(i=0;i<10;i++){
		
		
		
		scanf("%d",&a[i]);
	}

	for(i=0;i<10;i++){
		
		min=a[i];
			for(j=i+1;j<10;j++){
		
		if(a[j]<min){
			temp=min;
			min=a[j];
			a[j]=temp;
		}
		
		
	}
a[i]=min;
	}
	
	for(i=0;i<10;i++){
		printf("\n%d",a[i]);
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
