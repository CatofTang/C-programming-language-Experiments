//成绩计算函数
#include<stdio.h>
#define N 10
float max(float x[],int n);
float min(float y[],int l);
int main()
{
	int i;
	float a[N],sum = 0,ave,maxscore,minscore;
	
	for(i=0;i<N;i++)
	{
		printf("请输入第%d个歌手的成绩:",i+1);
		scanf("%f",&a[i]);
		sum=sum+a[i];
	}
	maxscore=max(a,N);
	minscore=min(a,N);
	ave=(sum-maxscore-minscore)/8;
	printf("歌手的最后得分是:%.2f\n",ave);
}

float max(float x[],int n)
{
	int i;
	float m;
	m=x[0];
	for(i=0;i<n;i++)
	{
		if(m<x[i])
		m=x[i];
	}
	
	return m;
}

float min(float y[],int l){
	int i;
	float mi;
	mi=y[0];
	for(i=0;i<l;i++)
	if(mi>y[i])
	mi=y[i];
	
	return mi;
}
