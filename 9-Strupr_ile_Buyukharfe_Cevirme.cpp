#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main(){
	
	char isim[20];
	
	printf("duzeltmek istediginiz sayiyi lutfen giriniz...\n");
	gets(isim);
	
	strupr(isim);
	printf("duzeltilmis hali sudur.=%s",strupr(isim));
	return 0;
}
