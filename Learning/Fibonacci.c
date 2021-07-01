#include<stdio.h>


int main(){
int a1=1,a2=1;//fib
int y; //kullanýcý girecek
int z;//döngü deðiþkeni




printf("Fibonacciye hosgeldiniz.");
printf("Kac kere tekrar etmesini istiyorsaniz yaziniz.");
scanf("%d",&y);

printf("%d\n%d\n",a1,a2);
for(z=0;z<y;z++){
a1+=a2;
a2+=a1;
printf("%d\n%d\n",a1,a2);




}


























return 0;
}

