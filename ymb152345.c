#include<stdio.h>
void main()
{
	int minutes,h,m;
	printf("\n enter number of minutes");
	scanf("%d", &minutes);
	h=minutes/60;
	m=minutes%60;
	printf("\n %d hours(s) %d minutes",h,m);
}
