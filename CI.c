#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,a,ci;
	printf("enter the valueof p");
	scanf("%f",&p);
		printf("enter the valueof r");
		scanf("%f",&r);
			printf("enter the valueof t");
			scanf("%f",&t);
a=p*pow((1+r/100),t);
ci=a-p;
printf("total amount a=%f",a);
	printf("compaund intrest %f",ci);
	return 0;


}
