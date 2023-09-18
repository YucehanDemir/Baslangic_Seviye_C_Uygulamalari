#include<stdio.h>



int main() {
int r=1,c=1,istenilen;

printf("Uzunlugunu istediginiz sayiyi giriniz=");scanf("%d",&istenilen);

while(r<=istenilen)
{
while(c<=r)
{
printf("%d",c);
c++;
}
printf("\n");
c=1;
r++;
}
return 0;
}

	
	
	
	
	
	
	
	

