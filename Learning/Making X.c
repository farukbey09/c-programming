#include<stdio.h>



int main (){
	
// X yap	
	
	int n,j,i;
	
	int boyut;
	printf("yildiz boyutu");
	scanf("%d",&boyut);
	
	for(n=0;n<boyut;n++){
		for(i=0;i<n;i++){	
		printf(" ");
	}
		for(i=0;i<1;i++){	
		printf("**");
	}
	for(i=boyut-1;i>n;i--){	
		printf(" ");
	

	}
	for(i=boyut-1;i>n;i--){	
		printf(" ");
	

	}
	for(i=0;i<1;i++){	
		printf("**");
	}

	printf("\n");
	}
	for(n=boyut-1;n>=0;n--){
		for(i=0;i<n;i++){	
		printf(" ");
	}
		for(i=0;i<1;i++){	
		printf("**");
	}
	for(i=boyut-1;i>n;i--){	
		printf(" ");
	

	}
	for(i=boyut-1;i>n;i--){	
		printf(" ");
	

	}
	for(i=0;i<1;i++){	
		printf("**");
	}

	printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
