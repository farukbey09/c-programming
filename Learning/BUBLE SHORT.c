#include<stdio.h>
/*
BURDAK� MANTIK �SE KAR�ILA�TIRMADIR �NDEKS 1  VE 2 Y� KAR�ILATIRIR K����� �NDEKS 1E ATAR SONRA B�Y��� DE 2E ATAR SONRA 2 �LE 3 � KAR�ILA�TIRIR
 TEKRAR K����� 2E YE B�Y��� 3 E ATAR BOYLE DEVAM EDER BU �EK�LDE SIRALMAI� OLUR



*/

int main(){
	
	
	int a[]={1,22,345,66,78,55,26,11,85,3};
int i,j;
int temp;
	for(i=9;i>=0;i--){
		
		for(j=9;j>=0;j--){
			if(a[i]>a[j]){
				temp=a[j];
				
				a[j]=a[i];
				a[i]=temp;
				
			}
			
		}
		
	}
	for(i=0;i<10;i++){
		
		
		printf("%d\n",a[i]);
		
		
	}
	
	
	
	
}
