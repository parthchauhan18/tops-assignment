// w.a.p to find simple intrest //
#include<stdio.h>
int main()
{
	float p,r,t,ans;
	printf("enter the principle value\n");
	printf("enter the rate of intrest\n");
	printf("enter the time\n");
	scanf("%f%f%f",&p,&r,&t);
	
	ans=(p*r*t)/100;
	printf("ans=%f",ans);
	
	return 0;
}

