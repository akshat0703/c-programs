#include<stdio.h>
#include<stdlib.h>
int main()
{
	int hra,da,bs;
	float gs;
	printf("enter basic salary");
	scanf("%d",&bs);
	if(bs<=10000)
	printf("gross salary is:%.2f",bs*1.8*1.2);
	else if(bs<=20000)
	printf("gross salary is:%.2f",bs*1.25*1.90);
	else if(bs>20000)
	printf("gross salary is:%.2f",bs*1.30*1.95);
	return 0; 
}
