//ͳ�Ƶ�������
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
	
	printf("ͳ�ƽ��:������%d������\n",num);
 } 
