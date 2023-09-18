#include<stdio.h>

void Findsmall(int []);

int main(){
	
	int arrax[50],i=0,sz;
	printf("Boyutunu giriniz=");scanf("%d",&sz);
	
	do{
		printf("%d.element=",i+1);scanf("%d",&arrax[i]);i++;
	}while(i<sz);
	Findsmall(arrax);
	return 0;
}
void Findsmall(int arr[])
{
	int small=arr[0],i=1,len=0;
	do{
		len++;}while(arr[len]!=NULL);
	
	do{
		if(small>arr[i]){
			small=arr[i];
		}
		i++;
	}while(i<len);
	printf("the smallest number among");i=0;do{
		i++;}while(i<len);
		printf(" is : %d",small);
	}
	

