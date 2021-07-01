#include<stdio.h>
/* ÞÝMDÝ BURDA SELECTÝON SHORTUN MANTIGI  EN KÜÇÜK ÝNDEKSTEN BAÞLAR VE
 SÜREKLÝ EN KÜÇK SEÇTÝGÝ SAYIYI ÝNDEKSE ATAR SONRA ÝNDEKS BÝR ARTAR TEKRAR GERÝ KALAN SAYILAR ARASINDA TEKRAR EN KÜÇÜÐÜNÜ SEÇER TEKAR  O ÝNDEKSE ARTAR VE ÝÞLEM SÜREKLÝ 
 TEKRAR TEKRAR ÝÞLEMÝ YAPARAK SIRALAR DÝZÝYÝ
ÖRN A[]={1,3,2}
A[0]=1 ÇÜNKÜ EN KÜÇÜK O
A[1]=2 ÇÜNKÜ EN KÜÇÜK O
A[2]=3 ÇÜNKÜ EN KÜÇÜK O
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
