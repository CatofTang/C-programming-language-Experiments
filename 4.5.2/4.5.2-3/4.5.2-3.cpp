//Êä³öÏàµÈ×Ö·û
#include<stdio.h>

int main()
{
	char x[]="language";
	char y[]="llngga";
	int i=0;
	
	while(x[i] != '\0' && y[i] != '\0'){
		if(x[i] == y[i])
		printf("%c",y[i++]);
		else
		i++;
	}
	printf("\n");
 } 
