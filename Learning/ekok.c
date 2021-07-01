#include<stdio.h>



int main(){
int a,b,c=1,d,e=0;

scanf("%d",&a);
scanf("%d",&b);

while(e==0){

c++;
if((c%a==0)&&(c%b==0)){
	d=c;
e++;
}


}

printf("%d",d);
}



