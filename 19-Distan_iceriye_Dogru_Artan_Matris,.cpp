#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main(){

	
int i,j,N=1,matrix[4][4],lf=0,tp=3;

for(i=1; i<=2; i++, lf++, tp--) {

for(j=lf;j<=tp;j++,N++){matrix[lf][j]=N;}

for(j=lf+1;j<=tp;j++,N++){matrix[j][tp]=N;}

for(j=tp-1;j>=lf;j--,N++){matrix[tp][j]=N;}

for(j=tp-1;j>=lf+1;j--,N++){matrix[j][lf]=N;}

}

for(i=0;i<4;i++){for(j=0;j<4;j++){printf("%-5d", matrix[i][j]);}printf("\n");}}
