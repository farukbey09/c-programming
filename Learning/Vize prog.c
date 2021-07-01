#include<stdio.h>
int main(){
	int a,b,c;
	float ort,x;
	printf("1.Notunuzu giriniz:");
	scanf("%d",&a);
	printf("2.Notunuzu giriniz:");
	scanf("%d",&b);	
	printf("Final notunuz:");
	scanf("%d",&c);
	printf("Uni ort giriniz:");
	scanf("%f",&x);
	ort=(3*a+3*b+4*c)/10;
	
	if(ort>=95)
	printf("Notunuz AA :%.1f",ort);
	
	else if(ort <=95 && ort >= 90)
	printf("Notunuz BA :%.1f",ort);
	
	else if(ort <=90 && ort >= 85)
	printf("Notunuz BB :%.1f",ort);
	
	else if(ort <=85 && ort >= 80)
	printf("Notunuz CB :%.1f",ort);
	
	else if(ort <=85 && ort >= 75)
	printf("Notunuz CC :%.1f",ort);
	
	else if(ort <=75 && ort >= 70){
	
	
	
	printf("Notunuz DC :%.1f",ort);
	
	 	if(x<2.20){
	 	printf("dersi tekrar alman yararýna olur cunku uniort dusuk.");
	 }
	
	
	}
	



	else if(ort <= 70 && ort >= 65){
	
	printf("Notunuz DD :%d\n",int(ort));
    printf("Tebrikler Gectiniz");	
		
		if(x<2.20){
	 	printf("dersi tekrar alman yararýna olur cunku uniort dusuk.")	;
		}}






	
    else{
		
	printf("dersten kaldýnýz.");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
