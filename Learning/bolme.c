#include<stdio.h>
int bol(int a,int b,int c);

int main(){

int a,b,c=0;
printf("please enter 2 value that you want to divide\n");
scanf("%d %d",&a,&b);
printf("This is your result :%d",bol(a,b,c));
return 0 ;
}

int bol(int a,int b,int c){


if((a)>=b){
a=a-b;

	c++;	
return bol(a,b,c);
}
else
return c;


}
