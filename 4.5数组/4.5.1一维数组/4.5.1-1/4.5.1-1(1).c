#include<stdio.h>
#define N 5
int main()
{
	int a[N]={0},temp,i,j;
	i=0;
	j=N-1;
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	i=0;
	while(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		j--;
		i++;
		
	}
	
	for(i=0;i<5;i++){
	printf("%d",a[i]);
	printf(" ");
	}
}
