//¥Ú”°æÿ’Û
#include<stdio.h>
int main()
{
	int i,j,k,a[5][5] = {0};
	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
	if(i+j == 4)
	a[i][j]=1;
	else if(i+j >4)
	a[i][j]=2;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
		printf("%4d",a[i][j]);
		k++;}
		if(k%5 == 0)
		printf("\n");
	}
 } 
