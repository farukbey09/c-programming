#include<stdio.h>
int main(){


// (V�cut a��rl�g�/(boy^2)

float x,y,bki;
printf("Merhabalar Beden Kitle Indeksinizi Olcmek icin hosgeldiniz.\n");
printf("Once Kilonuzu Sonra Boyunuzu Giriniz.");
scanf("%f %f",&x,&y);
bki = (x/(y*y));
if(bki<20.0){
	printf("Beden kitle indeksiniz 20 nin alt�nda acilen bir uzmana g�r�nmeniz laz�m: %f",bki);
}
else if(20.0<=bki&&bki<25.0){
	printf("Gayet Normalsiniz Beden Kitle Indeksiniz : %f ",bki);
}


else if(25.0<=bki&&bki<=30.0){
	printf("Hafif sismansiniz\n kendinize dikkat etmelisiniz Beden Kitle Indeksiniz : %f ",bki);
}



else if(30.0<bki&&bki<=35.0){
	printf("Obez olarak tan�mlan�yorsunuz \nuzmanlarla gorsmeniz sizin yararinza olur Beden Kitle Indeksiniz : %f ",bki);
}



else if(35.0<bki&&bki<=40.0){
	printf("cok sisman katogerisindesiniz \nuzmanla gorusmelisiniz beden k�tle indeksiniz bu : %f",bki);
}


else{
	printf("Siz Morbit Sismansiniz \n Sagliniz asiri kotu durumda acilen bir uzmana g�r�nmelisiniz cunku beden kitle indeksiniz bu :%f.",bki);
}








































return 0;
}
