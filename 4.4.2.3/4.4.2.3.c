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
 	int n;
 	printf("Input n:");
 	scanf("%d",&n);
 	if(n<=0) printf("n�ǷǷ�����!");
 	else printf("Fibonacci���е�%d����%ld",n,fib(n));
 }
