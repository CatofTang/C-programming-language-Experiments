//�ⷨһ
#include<stdio.h>
#define MAXN 20
void Shift(int a[],int N);/*����shift������ʵ��N��Ԫ��ѭ��λ��1λ*/
int main()
{
	int Number[MAXN],N,M;
	int i;
	scanf("N=%d,M=%d",&N,&M);
	for(i=0;i<N;i++)
		scanf("%d",&Number[i]);
	M %= N;/*��M>Nʱ�������ƶ�λ��Ϊ��������������ʱ������û���ƶ������������������Խ�ʡ�ƶ�����*/
	for(i=0;i<M;i++)
		Shift(Number,N);
	for(i=0;i<N-1;i++){
		printf("%d",Number[i]);
		printf(" ");
	}
	printf("%d\n",Number[N-1]);
	return 0;
}
void Shift(int a[],int N)
{
	int temp,i;
	temp=a[N-1];
	for(i=1;i<N;i++)
		a[N-i]=a[N-i-1];
	a[0]=temp;
}