#include<stdio.h>

struct time
{
	int hour;
	int minute;
	int second;
};

update(struct time *p)
{
	(*p).second++;
	if((*p).second==60)
	{
		(*p).second = 0;
		(*p).minute++;
	}
	if((*p).minute == 60)
	{
		(*p).minute=0;
		(*p).hour++;
	}
	if((*p).hour==24)
	(*p).hour=0;
}

int main()
{
	int i,j; struct time t;
	t.hour=t.minute=t.second=0;
	for(i=0;i<1000000;i++)
	{
		update(&t);
		printf("\r%02d:%02d:%02d",t.hour,t.minute,t.second);
		for(j=0;j<800000000;j++)
		;
	}
}
