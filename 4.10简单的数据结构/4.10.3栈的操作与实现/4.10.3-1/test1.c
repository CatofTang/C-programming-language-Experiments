#include<stdio.h>
#define MAX 50
typedef struct
{
	int elem[MAX];
	int top;
}Sqstack;
void main()
{
	Sqstack s;int x;
	s.top=-1;
	while(1)
	{
		printf("��������ջ���ݣ�-1Ϊ����:");
		scanf("%d",&x);
		if(x==-1) break;
		s.top++;
		s.elem[s.top]=x;
	}
	printf("��ջ˳��ӦΪ:");
	while(1)
	{
		if(s.top == -1) break;
		x=s.elem[s.top];
		printf("%d->",x);
		s.top--;
	}
	printf("END\n");
}