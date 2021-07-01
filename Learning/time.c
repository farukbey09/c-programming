#include<stdio.h>
#include<time.h>


int main(){
	
	struct tm *local,*gm;    //
	time_t t;				//BU KISIM TÝME ÝÇÝN
	t=time(NULL);			//
	local=localtime(&t);
	while(1){
		system("cls");
		printf("Time-->%d : %d: %d\n",local->tm_hour,local->tm_min,local->tm_sec);
		local->tm_sec++;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
