#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch;
	int count=0;
	double score;
	char result,ans[20];
	int lineend,i,line;
	FILE *fp1,*fp2;
	fp1= fopen("shijuan.txt","r");
	fp2= fopen("daan.txt","r");
	i=1;
	while(!feof(fp2))
	{
		fscanf(fp2,"%c",&ans[i]);
		i++;
	}
	line=count=0;
	printf("**��ʼ���ԣ�����дѡ���д��ĸ���������**\n\n");
	while(1)
	{
		lineend=0;
		while(!lineend)
		{
			ch = fgetc(fp1);
			if(ch=='#')
			goto end;
			else if(ch!='\n')
			putchar(ch);
			else
			{
				lineend=1;
				line++;
			}
		}
			scanf("%c",&result);
			getchar();
			if (result == ans[line])
			{printf("��ȷ!\n");
			count++;
			}
			else
			printf("����!\n");
		}
	end:
			score=100.0/line*count;
			printf("���ĵ÷�:%f\n",score);
			fclose(fp1);
}
