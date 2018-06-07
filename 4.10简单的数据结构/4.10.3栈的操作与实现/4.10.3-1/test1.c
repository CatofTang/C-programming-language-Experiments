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
		printf("请输入入栈数据，-1为结束:");
		scanf("%d",&x);
		if(x==-1) break;
		s.top++;
		s.elem[s.top]=x;
	}
	printf("出栈顺序应为:");
	while(1)
	{
		if(s.top == -1) break;
		x=s.elem[s.top];
		printf("%d->",x);
		s.top--;
	}
	printf("END\n");
}