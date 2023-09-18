#include<stdio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>


int main(){
	char arr[100];
	int numlet=0,numword=1,numdigit=0,i=0;
	printf("Enter a sentence =");gets(arr);
	
	while(i<strlen(arr))
	{
		if(isdigit(arr[i])){numdigit++;}
        if (isalpha(arr[i])){numlet++;}
		if(isspace(arr[i])){numword++;}
		i++;	
	}
	printf("The letter number is=%d\n The digit number is=%d\n The word number is=%d\n",numlet,numdigit,numword);
}
