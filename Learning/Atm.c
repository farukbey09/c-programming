#include<stdio.h>
int main(){
	
	int islem,tutar;
	int bakiye=1000;
	
	
	printf("islemler\n1:Para cekme\n2:para yatirma\n3:havale\n4:bakiye sorugulama\n5: kart iade\n");
	printf("Islemi seciniz");
	scanf("%d",&islem);
	
	
	
	
	switch(islem){
	
		case 1 :
		 printf("Bakiyeniz :%d\n",bakiye);
		 printf("Tutari giriniz");
		 scanf("%d",&tutar);
		 if(bakiye<tutar){
		
			printf("Bakiye yetersiz\n");
	}
	bakiye -= tutar;
	printf("Bakiyeniz :%d",bakiye);	
		break;
		
		
		
		
		
		
		
		
		
		
		case 2 :
		 printf("Bakiyeniz :%d\n",bakiye);
		 printf("tutari giriniz");
	     scanf("%d",&tutar);
		
	
			
	bakiye += tutar;
	printf("Bakiyeniz :%d",bakiye);	
		
		break;
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		case 3 :
		 printf("Bakiyeniz :%d\n",bakiye);
		 printf("Havale tutari");
		 scanf("%d",&tutar);
		 if(bakiye<tutar){
		
			printf("Bakiye yetersiz\n");
	}
	bakiye-=tutar+10;
	printf("Bakiyeniz :%d",bakiye);	
		
		
		break;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		case 4	: 
		printf("Bakiyeniz :%d\n",bakiye);
		
		break;
		
	
	
	
	
	
	
	
	
	
	
	
	
	
		case 5 : 
		printf("Isleminiz Basariyla tamamlandi Bankamizi tercih ettiginiz icin tesekkurler");
	
	break;
	
	
	
	
	
	
	
	
	
	
	
	
	
		default:
			printf("bilinmeyen islem");
			break;
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	
	
	
	
	
	
	
	
  return 0;	
  }
  
