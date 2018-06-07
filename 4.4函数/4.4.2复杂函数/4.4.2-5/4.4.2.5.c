//计算整数各位上的数字之积
#include<stdio.h>
long fun(long n)
{
	long f;
	if(n<=9)
	f=n;
	else
	f=(n%10)*fun(n/10);
	return f;
 } 
 
 main()
 {
 	long n;
 	printf("输入一个数:");
 	scanf("%d",&n);
 	printf("该数的各位之积为%ld\n",fun(n));
 }
