#include<stdio.h>
void checkNum(int *aPtr,int b,int size);
int main(void){
	int check;
int a[]={5,6,2,8,9,4};
int size = sizeof(a)/sizeof(int);
for(int i=0;i<size;i++){
	printf("%d ",a[i]);
}
printf("\nMoi ban nhap so can kiem tra : ");
scanf("%d",&check);
checkNum(a,check,size);

return 0;

}
void checkNum(int *aPtr,int b,int size){
	 
	for(int i=0;i<size;i++){
		if(*(aPtr + i) == b){
			printf("%d ",i);
		}
		
	}
}
