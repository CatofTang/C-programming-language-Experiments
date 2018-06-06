#include<stdio.h>
#include<string.h>

int main()
{	int i;
	char ch[100],*p,search[100];
	FILE *fp1,*fp2;
	fp1 = fopen("stud.txt","w");
	fp2 = fopen("stud.txt","r");
	
	printf("请输入5名学生的学号，姓名，成绩:\n");
	for(i=1;i<=5;i++)
	{
		gets(ch);
		p=ch;
		while(*p != '\0')
		{
			p++;
		}
		*p='\n';
		p++;
		*p='\0';
		fputs(ch,fp1);
	}
	fclose(fp1);
	/*录入部分结束*/
	printf("\n----------------------\n\n");
	printf("请输入需要查询的学生学号:");

	scanf("%s",search);

	while(fgets(ch,sizeof(ch),fp2))
	{
		if(strstr(ch,search))
			printf("%s",ch);
	}
	
}
