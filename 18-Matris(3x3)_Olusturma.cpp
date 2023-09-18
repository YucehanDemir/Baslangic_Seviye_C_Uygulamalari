
#include<stdio.h>
#include<stdlib.h>


int main(){
	
	int i,j;
	int a[3][3];
	printf("enter the elements array:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
	
}
