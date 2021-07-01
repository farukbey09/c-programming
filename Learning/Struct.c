#include<stdio.h>
struct kitapkayit{
	char isim[20];
	char yazar[20];
	int sayfa;
	int ort;
	
	
	//fosya iþlemleri ile struct ý birleþtirip projeye koyucam.
	
};



int main(){
//FILE *pt=fopen("deneme.txt","a+");

int n,i=0,c=0;
printf("kaç tane kitap eklemek istioysaniz giriniz");
scanf("%d",&n);	
struct kitapkayit ekle[n];
for(;i<n;i++){
	
	printf("%d.kitabi giriniz\n",i+1);
	scanf("%s",ekle[i].isim);
	printf("%d.yazari giriniz\n",i+1);
		scanf("%s",ekle[i].yazar);			
	printf("%d.sayfayi giriniz\n",i+1);
	 scanf("%d",&ekle[i].sayfa);    
	printf("%d.ort giriniz\n",i+1);
scanf("%d",&ekle[i].ort);
}
	


	for(;c<n;c++){
printf("%s %s %d %d \n",ekle[c].isim,ekle[c].yazar,ekle[c].sayfa,ekle[c].ort);

}
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
