//LCM/LCG
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
int x[10],a,c,m,ch,i,n;

clrscr();
printf("\n enter seed:\t");
scanf("%d",&x[0]);

printf("\n enter addition constant:\t");
scanf("%d",&c);
printf("\n enter multiplier:\t");
scanf("%d",&a);
printf("\n enter divisor:\t");
scanf("%d",&m);

printf("\n 1.multiplicative LCG \n 2. Additive LCG \n 3.Mixed LCG   \n enter the choice number:\t");
scanf("%d",&ch);
printf("\n enter numbner of random numbers to generate:\t");
scanf("%d",&n);

printf("\n your seed is:\t%d",x[0]);
switch(ch)
	{
	 case 1:
		printf("\n the Random numbers by multiplicative LCG: \n");
		for(i=1;i<=n;i++)
			{
			x[i]=(a*x[i-1])%m;
			printf("\t x[%d]=%d",i,x[i]);
			}
		break;
	 case 2:
		printf("\n the Random numbers by additive LCG: \n");
		for(i=1;i<=n;i++)
			{
			x[i]=(x[i-1]+c)%m;
			printf("\t x[%d]=%d",i,x[i]);
			}
		break;

	 case 3:
		printf("\n the Random numbers by mixed LCG: \n");
		for(i=1;i<=n;i++)
			{
			x[i]=(a*x[i-1]+c)%m;
			printf("\t x[%d]=%d",i,x[i]);
			}
		break;
	 default:
		printf("\n incorrect choice.");
		break;
	}
getch();
}