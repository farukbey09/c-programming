#include<stdio.h>
/* 	BURADAKÝ MANTIK ÝSE BÝR KEY BELÝRLERÝZ KENDÝMÝZE BU DÝZÝNÝN NERESÝNDE ÝSE O NOKTAYA SOKARIZ O DÝZÝYÝDE SIRAYLA BÝZ DÝZERÝZ
KARÞILAÞTIRIZ EN BASTAN BÜYÜKSE BÝR ÜST ÝNDEKSE ATARIZ KÜÇÜKSE ZATEN YERÝ ORASIDIR YANÝ O ÝNDEKSTÝR*/




int main(){
	
	
	int i,j,a[10],key;
	for(i=0;i<10;i++){
scanf("%d",&a[i]);	}
	
	for(i=1;i<10;i++)
{
	
	
	j=i-1;
	while(a[i]<a[j]&&j>=0){
		a[j+1]=a[j];
		j--;
		
	}
	a[j+1]=a[i];
	
	
	
	
	
	}	
	for(i=0;i<10;i++){
printf("%d\n",a[i]);	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
