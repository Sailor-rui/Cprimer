#include <stdio.h>
int main()
{
	//char grade;
	int n;
	scanf("%f",&n);
	printf("You score:");
	switch(n) 
	{
		case 1.1:printf("85-100\n");break;
		case 2.1:printf("7O-84\n");break;
		//case 'C':printf("60-69\n");break;
		//case 'D':printf("85-100\n");break;
		default:printf("error\n");
	}
	return 0;
}

