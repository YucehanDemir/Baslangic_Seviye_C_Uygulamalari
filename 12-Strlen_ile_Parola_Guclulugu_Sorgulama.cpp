#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main(){
	char parola[50];
	printf("parolanizi giriniz=");
	gets(parola);
	
	int i;
	 
	 for(i=1;i<strlen(parola)<10;i++)
   if(strlen(parola)<10){
   
   		printf("En az 10 karakter olacak sekilde parolanizi tekrar giriniz=");gets(parola);
	    	   

   }
   else {
   	
   	while(strlen(parola)>=10){
   		
   	printf("parolaniz gucludur.");
   	goto cikis;
	   }
}
cikis:
   return 0;
  
}

   
