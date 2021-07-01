#include<stdio.h>
int main(){

int n, toplam=0,hane=0;
printf("Sayi giriniz:");
scanf("%d", &n);

do{
toplam += (n%10);
//printf("%d\n",n);
hane++;
n=n/10;


}
while(n>0);
printf("Hane sayisi : %d\n    Rakamlari toplami:%d",hane, toplam );


return 0;
}

