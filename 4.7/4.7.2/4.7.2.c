#include<stdio.h>
#define N 3

struct stu
{
	int num;
	char name[20];
	float score[3];
	float sum;
};

struct stu s[N];
int main()
{
	int i,j,sum=0;
	for(i=0;i<N;i++)
	{
		scanf("%d%s",&s[i].num,&s[i].name);
		for(j=0;j<3;j++)
		{
			scanf("%f",&s[i].score[j]);
			sum=sum+s[i].score[j];
		}
	}
	printf("学号    姓名    总分\n");
	printf("---------------------\n");
	for(i=0;i<N;i++)
	printf("%-8d%-8s%-8.1f\n",s[i].num,s[i].name,s[i].sum);
}
