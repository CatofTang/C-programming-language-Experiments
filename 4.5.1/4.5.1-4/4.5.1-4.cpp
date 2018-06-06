//请勿运行，需要修改 
#include<stdio.h>
int sort(int x[],int n);
int main()
{
	int a[10]={0},i,j;
	printf("请输入10个整数:\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
		
	sort(a,10);
	
	for(i=0;i<10;i++){
	printf("%d",a[i]);	
	printf(" ");
}
}

int sort(int *x,int n)
{
	int i,j,temp;
	for(j=0;j<=n-2;j++)
	for(i=0;i<=n-j-2;i++){
		if(*(x+(i-1))>x[i+1])
		temp=x[i];
		x[i]=x[i+1];
		x[i+1]=temp;
	}
}
