#include<stdio.h>
int main(){
	
	
	// arrayler listelemedir [] bu listenin boyutunu belirler {} bu ise listenin i�ini temsil ederi listeyi i�ine yazar�z
	// �renk vereyim int a[]={1,2,5,7,9,3,5,4};
	float a[5];
	float toplam=0.0;
	int i;
	for(i=0;i<5;i++){
		printf("bir sayi giriniz:");
		scanf("%f",&a[i]);
		
		
		
	}
	for(i=0;i<5;i++){
		toplam+=a[i];
		
		
		
		
		
	}
	
	printf("girdiginiz sayilarin ortlamas�:%.2f dir",toplam/5);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
