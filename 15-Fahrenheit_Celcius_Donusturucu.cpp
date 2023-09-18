#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>


int main(){
	int choose;
	float sonuc,b;
	printf("fahrenayt to celcius please choose this box:[1]\n");
	printf("celcius to fahrenayt please choose this box [2]\n");
	scanf("%d",&choose);
	printf("cevirmek istediginiz rakam=");scanf("%f",&b);
	
	if(choose==1){
		sonuc=(b-32)/1.8;
	}
	else if (choose==2) {
		sonuc=(b*1.8)+32;
	}
	else {
		printf("1 ya da 2 rakamindan birini seciniz");
	}
	printf("sonuc = %f ",sonuc);
	return 0;
	
}
