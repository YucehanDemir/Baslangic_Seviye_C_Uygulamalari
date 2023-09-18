#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Binary hesabi yaparken en soldaki bit 1 olup sola dogru artmaktadir.
int main(){
	
	int num,i;
	printf("Donusturmek istediginiz sayiyi giriniz:");scanf("%d",&num);
	unsigned ch=0x80;
	for(i=0;i<8;i++){
		if(num&ch){
			printf("1");
		}
		else{
			printf("0");
		}
		ch>>=1;
	}
}
