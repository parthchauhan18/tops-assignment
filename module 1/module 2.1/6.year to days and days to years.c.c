//w.a.p to convert years into days and days into years //

#include<stdio.h>
int main()
{
	int num;
	float ans,i;
	
	printf("press 1. to convert year into days\npress 2. to convert days into year\n");
	scanf("%d",&num);
	
	if(num==1)
	{
		printf("enter the number of year:\n");
		scanf("%f",&i);
		
		ans=i*365;
		printf("%f\n",ans);
	}
	else if(num==2)
	{
		printf("enter the number of days\n");
		scanf("%f",&i);
		
		ans=i/365;
		printf("%f",ans);
		
	}
	return 0;
}
