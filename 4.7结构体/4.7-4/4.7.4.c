#include<stdio.h>
#include<string.h>

struct employee{
	int num;
	char name[20];
	double salary;
	double bonus;
	double sum;
	char salgrade[20];
}emp[20];

int main()
{
	int n,i=0;
	printf("Input n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%s%lf%lf",&emp[i].num,&emp[i].name,&emp[i].salary,&emp[i].bonus);
		/*scanf("%d",&emp[i].num);
		gets(emp[i].name);
		scanf("%d",&emp[i].salary);
		scanf("%d",&emp[i].bonus);*/
	}
	
	i=0;
	while(i<n)
	{
		emp[i].sum=emp[i].bonus+emp[i].salary;
		if(emp[i].sum>=10000)
		strcpy(emp[i].salgrade,"ÍÁºÀ");
		else if(emp[i].sum>=5000)
		strcpy(emp[i].salgrade,"ÔÂ¹â");
		else
		strcpy(emp[i].salgrade,"ŒÅË¿");
		i++;
	}
	
	i=0;
	printf("----------------------------------\n");
	while(i<n)
	{
		printf("%s,%.0f,%.0f,rate is %s\n",emp[i].name,emp[i].salary,emp[i].bonus,emp[i].salgrade);
		i++;
	}
	return 0;
}
