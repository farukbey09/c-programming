#include<stdio.h>
/* 	BURADAK� MANTIK �SE B�R KEY BEL�RLER�Z KEND�M�ZE BU D�Z�N�N NERES�NDE �SE O NOKTAYA SOKARIZ O D�Z�Y�DE SIRAYLA B�Z D�ZER�Z
KAR�ILA�TIRIZ EN BASTAN B�Y�KSE B�R �ST �NDEKSE ATARIZ K���KSE ZATEN YER� ORASIDIR YAN� O �NDEKST�R*/




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
