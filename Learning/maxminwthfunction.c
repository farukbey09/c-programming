#include<stdio.h>
void maxi(int b[],int size){
int max,c,min;
max=b[0]; 
min=b[0];
for	(c=1;c<size;c++){
	
	if(max<b[c]){
		max=b[c];
	}
	else if(min>b[c])
	min=b[c];


}

	
	printf("%d %d",max,min);
}




int main(){
	
	int a[5],i;
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
		
	maxi(a,5);
	
	
	
	
	
	
	
	
	return 0;
}
