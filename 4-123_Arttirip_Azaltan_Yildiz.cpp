#include<stdio.h>


int main(){

//i=2 alinmasi sebebi j=1 alindigindan en üst satiri bos atlamamak icindir.Eger i=1 yaparak tekrar denerseniz
//kod 1 satir asagiya inecektir. 
int i=2,j=1;
    while (i<4){
	j=1;
	 while(j<=i-1){
	 printf ("%d",j);
	 j++;
	 }
	 printf("\n");
	 i++;
	 }
	 
    while (i>0){
	j=1;
	  while(j<=i-1){
	  printf ("%d",j);
	  j++;
	  }
	  printf("\n");
	  i--;
	  }
}
