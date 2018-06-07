//字符串顺序转换（制作时间仓促，请自行思考如何转换大小写与忽略标点符号并转换成空格）
#include<stdio.h>
#include<string.h>
void Contray2(char a[])
{
	int N,i,j;
	N = strlen(a);
	for(i=0,j=N-1;i<j;i++,j--){
		a[N] = a[i];
		a[i] = a[j];
		a[j] = a[N];
	}
	a[N] = '\0';

}

int main()
{
	char Number[20],copy[20];
	//int i;
	/*printf("请输入长度:");
	scanf("%d",&N);*/
	printf("请输入字符串:");
	gets(Number);
	strcpy(copy,Number);
	Contray2(Number);
	/*for(i=0;i<N-1;i++)
	{
		printf("%d",Number[i]);
		printf(" ");
	}
	printf("%d\n",Number[N-1]);*/
	printf("%s,%s\n",copy,Number);
}