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
	struct student *ogr1=(struct student*)malloc(sizeof(struct student)*3);
	struct student *ogr2=(struct student*)malloc(sizeof(struct student));
	
	
	FILE *pt1=fopen("ogrenci.txt","w");
	for(i=0;i<3;i++){
		
		scanf("%s %s %d",(i+ogr1)->ID,(i+ogr1)->name,&(ogr1+i)->age);
		fwrite((ogr1+i),sizeof(struct student),1,pt1);
																					//bu k�s�m dosyaya kaydetmek i�in onemsiz
		
		
	}
	fclose(pt1);
	char ID1[20];
	int c;
	printf("giriniz ID yi \n");
	scanf("%s",ID1);
	FILE *pt2=fopen("ogrenci.txt","r+");
	char name1[20];
	for(i=0;i<3;i++){

		fread(ogr2,sizeof(struct student),1,pt2);
	
		if(!strcmp(ogr2->ID,ID1)){
		fseek(pt2,-1*sizeof(struct student),SEEK_CUR);		//burada kar��la�t�r�yoruz IDleri eger ayn�larsa bir struct student kadar geriye al�yo sonra oraya yeni isimli halini yaz�yo
		printf("yeni adinizi giriniz\n");
		
		scanf("%s",name1);
	strcpy(ogr2->name,name1);
	fwrite(ogr2,sizeof(struct student),1,pt2);
		printf("basariyla degistirildi");
		break;
		}
		
		
		
		
		
	}
	fclose(pt2);

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
