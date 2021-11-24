// program to implement leical-analyser that recognise a,abb,a*b+

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	char s[100],c;
	int state=0,i=0;
	clrscr();
	
	printf("\n enter any string of a and b:\n");
	gets(s);
	
	while(s[i]!='\0')
	{
		c=s[i++];
		switch(state)
		{
			case 0:
			if(c=='a')
				state=1;
			else if(c=='b')
				state=3;
			else
				state=5;
				
			break;
			
		case 1:
			if(c=='a')
				state=4;
			else if(c=='b')
				state=2;
			else
				state=5;
				
			break;
			
		case 2:
			if(c=='a')
				state=5;
			else if(c=='b')
				state=3;
			else
				state=5;
				
			break;
		
		case 3:
			if(c=='a')
				state=5;
			else if(c=='b')
				state=3;
			else
				state=5;
				
			break;
			
		case 4:
			if(c=='a')
				state=4;
			else if(c=='b')
				state=3;
			else
				state=5;
				
			break;
			
		case 5:
			printf("\n String Rejected.");
			getch();
			exit(0);

		default:
			printf("\n terminated");
			getch();
			exit(0);
		}
			
			
	}
	
	if(state==1||state==3)
		printf("\n The string is accepted ! by the analyzer.");
	else
		printf("\n The string is rejected ! by the analyser.");
	
	getch();
}