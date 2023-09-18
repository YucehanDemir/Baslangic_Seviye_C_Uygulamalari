#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Binary hesabi yaparken en soldaki bit 1 olup sola dogru artmaktadir.
int main(){
	
	int bin,i=0,dec=0,pow=1,rem;
	printf("enter a number =");scanf("%d",&bin);
	while(bin!=0){
		
		rem=bin%10;
		dec+=rem*pow;
		pow=pow*2;
		bin/=10;
	}
	printf("the results is = %d",dec);
	return 0;
}
