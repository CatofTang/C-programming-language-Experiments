#include<stdio.h>
//#include<string.h>

int main()
{
	char s1[80],s2[40];
	int i=0,j=0;
	printf("Input string1:");
	gets(s1);
	printf("Input string2:");
	gets(s2);
	while(s1[i]!='\0')
		i++;
	while(s2[j]!='\0')
		s1[i++]=s2[j++];
	s1[i]='\0';
	
	printf("new string:%s\n",s1);
}
