//����3
#include<stdio.h>
#define MAXN 20

void Contray2(int a[],int N)
{
	int i,j;
	for(i=0,j=N-1;i<j;i++,j--)
	{
		a[i]*=a[j];
		a[j]=a[i]/a[j];
		a[i]=a[i]/a[j];
			
	}
}

int main()
{
	int Number[MAXN],N;
	int i;
	printf("�����볤��:");
	scanf("%d",&N);
	printf("����������:");
	for(i=0;i<N;i++)
		scanf("%d",&Number[i]);
	Contray2(Number,N);
	for(i=0;i<N-1;i++)
	{
		printf("%d",Number[i]);
		printf(" ");
	}
	printf("%d\n",Number[N-1]);
}