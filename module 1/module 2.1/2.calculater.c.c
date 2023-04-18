// w.a.p to calculater//
#include<stdio.h>
int main()
{
	int a,b,cal;
	printf("1.addition\n 2.subtraction\n 3.multiplecation\n 4.division\n 5.modulo\n");
	printf("enter the value\n");
	scanf("%d%d%d",&a,&b,&cal);
	switch(cal)
	{
	
		case 1:
		printf("addition:%d",a+b);
		break;
		
		case 2:
		printf("subtraction:%d",a-b);
		break;
		
		case 3:
		printf("multiplication:%d",a*b);
		break;
		
		case 4:
		printf("division:%d",a/b);
		break;
		
		case 5:
		printf("modulo:%d",a%b);
		break;
		
		default:
		printf("INVALIDE NUMBERS");
		break;		
			
    }
		return 0;
			
		
		
}

