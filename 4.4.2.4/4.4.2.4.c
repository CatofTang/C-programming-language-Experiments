//��Ʋ���������
#include<stdio.h>
long fib(int n)
{
	long f;
	if(n==1||n==2)
	f=1;
	else
	f=fib(n-1)+fib(n-2);
	return f;
 } 
 
 main()
 {
 	int n,i;
 	printf("Input n:");
 	scanf("%d",&n);
 	if(n<=0) printf("n�ǷǷ�����!");
 	else {
	 printf("Fibonacci����ǰ%d����:",n);
	 for(i=1;i<=n;i++)
	 printf("%3d",fib(i));
	 }
	 printf("\n");
 }

