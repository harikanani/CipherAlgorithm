#include<stdio.h>
#include<conio.h>
void cipher(char tmp[],int key)
{
	int i = 0;
	for(i=0;tmp[i]!='\0';i++)
	{
		if((int)tmp[i] >=65 && (int)tmp[i] <=90	)
		{
			tmp[i] += key;
			if((int)tmp[i] >= 90)
			{
				int gap = tmp[i] - 90;
				tmp[i] = 'A';
				tmp[i] += gap;
			}
		}
		else
		{

			tmp[i] += key;
			if((int)tmp[i] >= 122)
			{
				int gap = tmp[i] - 122;
				tmp[i] = 'a';
				tmp[i] += gap;
			}
		}
	}
	printf("%s",tmp);
}
void main()
{
	char pt[25];
	clrscr();
	printf("Enter Strig:");
	gets(pt);
	cipher(pt,3);
	getch();
}