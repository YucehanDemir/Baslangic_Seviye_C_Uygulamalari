#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
	
	char isim[20];
	char ismintersi[20];
	printf("tersini bulmasini istediginiz sayiyi giriniz...");
	gets(isim);
	
	strrev(isim);
	
	printf("Ismin tersi=%s",isim); 



	return 0;
}

	
	
	
	
