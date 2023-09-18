#include<stdio.h>

//Palindromik sayi, iki taraftan okundugu zaman okunus yönüyle ayni olan sayilardir. Örnek: 1, 4, 8, 99, 101, 121, 363

int main(){
	
	int  n,a,toplam=0,basamak;
	
	printf("kontrol edilecek sayiyi giriniz : ");scanf("%d",&n);
	a=n;
	while(n!=0){
		basamak=n%10;
		toplam=(toplam*10)+basamak;
		n=n/10;
	}
	
	if(toplam==a){
		printf("girilen sayi bir polindrom sayidir.",a);
	}
	
	else{
		printf(" girilen sayi bir polindrom sayi degildir.",a);
		
	}

}
