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
	
	
/*	FILE *pt1=fopen("ogrenci.txt","w");
	for(i=0;i<3;i++){                                                              // DOSYAYA KAYDETMEK ÝÇÝN ÖNEMSÝZ BURASI
		
		scanf("%s %s %d",(i+ogr1)->ID,(i+ogr1)->name,&(ogr1+i)->age);
		fwrite((ogr1+i),sizeof(struct student),1,pt1);
		
		
		
	}
	fclose(pt1);*/
	char ID1[20];
	int c;
	printf("giriniz ID yi \n");
	scanf("%s",ID1);
	FILE *pt2=fopen("ogrenci.txt","r");
	FILE *pt3=fopen("ogrenci1.txt","w");
	for(i=0;i<3;i++){
	c=0;
		fread(ogr2,sizeof(struct student),1,pt2);
		if(!strcmp(ogr2->ID,ID1)){
			c=1;
		printf("basariyla silindi");       //burda eger aynýsý var ise siliyor diðerlerini yazýyo dosyaya
	
	
	
		}
		if(c!=1){
			fwrite(ogr2,sizeof(struct student),1,pt3);
		}
		
		
		
		
		
	}
	fclose(pt2);
	fclose(pt3);
	remove("ogrenci.txt");
	rename("ogrenci1.txt","ogrenci.txt");   		//burada dosyayý deðiþtiriyoruz tekrar eski isimli haline geliyo 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
