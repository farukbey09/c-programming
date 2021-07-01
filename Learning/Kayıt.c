#include<stdio.h>
struct student{
	char id[20];
	char name[20];
	char surname[20];
	int yas;
};




int main(){
	
	struct student *ogr=(struct student*)malloc(sizeof(struct student)*5);
	struct student *ogr1=(struct student*)malloc(sizeof(struct student)*5);
	int i;
	FILE *st1=fopen("ogr.txt","a+");
	/*for(i=0;i<5;i++){
		scanf("%s %s %s %d",ogr->id,ogr->name,ogr->surname,&ogr->yas);
		fwrite(ogr,sizeof(struct student),1,st1);
		
		
ogr++;		
	}
	
	*/
	
	for(i=0;i<5;i++){
		
		fread(ogr1,sizeof(struct student),1,st1);
		
		printf("%s %s %s %d\n",i+ogr1->id,i+ogr1->name,i+ogr1->surname,i+ogr1->yas);
		ogr1++;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
