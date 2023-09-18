#include<stdio.h>

#include<string.h>

int main(){
	
	char isim[15];
	printf("Lutfen bir kelime giriniz...\n");

    gets(isim);
	int lenght=strlen(isim);
printf("Karakterin Tersi :");
	for(int i=strlen(isim);i>=0;i--){
printf("%c",isim[i]);

	}
	
	
	printf("\n%s kelimesinin uzunlugu=%d",isim,lenght);
	return 0;
}
