#include<stdio.h>
void result_sum(float x1,float y1,float x2,float y2);
float sum_real,sum_imag;
int main()
{
	float real1,real2,imag1,imag2;
	/*void result_sum(float x1,y1,x2,y2);*/
	printf("请输入第一个复数的实部和虚部:");
	scanf("%f %f",&real1,&imag1);
	printf("请输入第二个复数的实部和虚部:");
	scanf("%f %f",&real2,&imag2);
	result_sum(real1,imag1,real2,imag2);
	printf("两个复数的和为%.2f+%.2fi\n",sum_real,sum_imag);
}

void result_sum(float x1,float y1,float x2,float y2)
{
	/*float sum_real,sum_imag;*/
	sum_real = x1+x2;
	sum_imag = y1+y2;
	/*return sum_real,sum_imag;*/
}
