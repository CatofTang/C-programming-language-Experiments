#include <stdio.h>
int count(char *p)
{
	int i=0;
	while(*p != '\0')
	{
		i++;
		p++;
	}
	return i;
}

int main()
{
	char a[80];
	int add;
	printf("input string:");
	gets(a);
	add=count(a);
	printf("len=%d\n",add);
	return 0;
}