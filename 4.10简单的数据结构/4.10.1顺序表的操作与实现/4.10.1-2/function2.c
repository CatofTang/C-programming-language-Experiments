//�ⷨ��
#include<stdio.h>
#define MAXN 100
//void Swap(a,b) {a ^= b;b ^= a;a ^= b;}/*ͨ����������������㽻��a��b(����)*/
void RightShift(int Array[],int N,int M);
int main()
{
	int Number[MAXN],N,M;
	int i;
	scanf("%d%d",&N,&M);
	for(i=0;i<N;i++)
		scanf("%d",&Number[i]);
	M %= N;
	RightShift(Number,N,M);
	for(i=0;i<N-1;i++)
		printf("%d ",Number[i]);
	printf("%d\n",Number[N-1]);
	return 0;
}

void RightShift(int a[],int N,int M)
{
	/*��һ������*/
	int i,j;
	for(i=0,j=N-1;i<j;i++,j--)
	{
		a[i] ^= a[j];
		a[j] ^= a[i];
		a[i] ^= a[j];
	}
	/*�ڶ�������*/
	for(i=0,j=M-1;i<j;i++,j--)
	{
		a[i] ^= a[j];
		a[j] ^= a[i];
		a[i] ^= a[j];
	}
	/*����������*/
	for(i=M,j=N-1;i<j;i++,j--)
	{
		a[i] ^= a[j];
		a[j] ^= a[i];
		a[i] ^= a[j];
	}
}