#include<stdio.h>
#include<stdlib.h>

void kutucizme(int en,int boy){
	int i,j;
	for (i=1;i<=boy;i++){
		for (j=1;j<=en;j++){
			printf("*");
		}
		printf("\n");
	}
	
	
}

int main(){
	int en1,boy1,i,j;
	 printf("Cizmek istediginiz kutunun enini giriniz:");scanf("%d",&en1);
	 printf("Cizmek istediginiz kutunun boyunu giriniz:");scanf("%d",&boy1);

		for (i=1;i<=boy1;i++){
		for (j=1;j<=en1;j++){
			printf("*");
		}
		printf("\n");
	}
	
}
