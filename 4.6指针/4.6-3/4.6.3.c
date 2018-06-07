//4.6.3
#include<stdio.h>
void strc(char *s,char *t);
int main(void)
{
	char s[80],t[80];
	gets(s);
	gets(t);
	strc(s,t);
	puts(s);
	return 0;
}

void strc(char *s,char *t)
{
	while(*s != '\0')
	{
		s++;
	}
	while(*t != '\0')
	{
		*s=*t;
		s++;
		t++;
	}
	*s='\0';
}