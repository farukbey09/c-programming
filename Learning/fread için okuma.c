#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student {
	char ID[20];
	char name[20];
	int  age;
	
	
	
};



int main(){
	int i,j;
	
	struct student *ogr2=(struct student*)malloc(sizeof(struct student));
	FILE *pt=fopen("ogrenci.txt","r");

	for(i=0;i<3;i++){
		fread(ogr2,sizeof(struct student),1,pt);
		printf("%s %s %d\n",ogr2->ID,ogr2->name,ogr2->age);
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
