#include<stdio.h>

struct stu
	{
		int num;
		char name[20];
		float score;
	};
int main()
{
	
	struct stu s1,*p;
	p=&s1;
	scanf("%d%s%f",&s1.num,&s1.name,&s1.score);
	
	printf("name:%s num:%d score:%.1f\n",s1.name,s1.num,s1.score);
	printf("name:%s num:%d score:%.1f\n",(*p).name,(*p).num,(*p).score);
	printf("name:%s num:%d score:%.1f\n",p->name,p->num,p->score);
}
