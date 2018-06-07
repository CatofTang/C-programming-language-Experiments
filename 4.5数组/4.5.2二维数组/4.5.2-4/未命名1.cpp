//统计单词数量
#include<stdio.h>

int main()
{
	char ch[100],*sp;
	int word = 1,num = 1;
	sp=ch;
	gets(sp);
	
	while(*sp != '\0')
	{
		if (*sp == ' '){
			word = 0;
			sp++;
		}
		
		else if (word == 0){
			word = 1;
			num++;
			sp++;
		}
		else if (word == 1)
		sp++;
	}
	
	printf("统计结果:共含有%d个单词\n",num);
 } 
