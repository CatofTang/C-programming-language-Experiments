//����������λ�ϵ�����֮��
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
 	printf("����һ����:");
 	scanf("%d",&n);
 	printf("�����ĸ�λ֮��Ϊ%ld\n",fun(n));
 }
