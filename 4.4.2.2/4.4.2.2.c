//����С������
#include<stdio.h>
int hcd(int m,int n);
int lcm(int x,int y);
int main()
{
	int s,a,b;
	printf("����������������:");
	scanf("%d,%d",&a,&b);
	s=lcm(a,b);
	printf("��С������Ϊ:%d\n",s);
}

int lcm(int x,int y)
{
	int h,l;
	h=hcd(x,y);
	l=(x*y)/h;
	return l;
}

int hcd(int m,int n)
{
	int r;
	r=m%n;
	while(r != 0)
	{
		m=n;
		n=r;
		r=m%n;
	}
	return(n);
}
