//4.6.4
#include<stdio.h>
void swap(int *q1,int *q2)
{
	/*----------�ı䴦----------*/
	int q;
	q=*q1;
	*q1=*q2;
	*q2=q;
}

int main()
{
	int a,b;
	int *p1,*p2;
	a=5;
	b=3;
	p1=&a;
	p2=&b;
	printf("a=%d,b=%d\n",a,b);
	swap(p1,p2);
	printf("a=%d,b=%d\n",a,b);
	return 0;
}
