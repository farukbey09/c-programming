#include<stdio.h>
/*
BURDAKÝ MANTIK ÝSE KARÞILAÞTIRMADIR ÝNDEKS 1  VE 2 YÝ KARÞILATIRIR KÜÇÜÐÜ ÝNDEKS 1E ATAR SONRA BÜYÜÐÜ DE 2E ATAR SONRA 2 ÝLE 3 Ü KARÞILAÞTIRIR
 TEKRAR KÜÇÜÐÜ 2E YE BÜYÜÐÜ 3 E ATAR BOYLE DEVAM EDER BU ÞEKÝLDE SIRALMAIÞ OLUR



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
