//解法一
#include<stdio.h>
#define MAXN 20
void Shift(int a[],int N);/*声明shift函数，实现N个元素循环位移1位*/
int main()
{
	int Number[MAXN],N,M;
	int i;
	scanf("N=%d,M=%d",&N,&M);
	for(i=0;i<N;i++)
		scanf("%d",&Number[i]);
	M %= N;/*当M>N时，由于移动位数为数据量的整数倍时，等于没有移动，所以求余运算后可以节省移动步骤*/
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