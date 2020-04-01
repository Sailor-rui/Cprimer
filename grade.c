#include <stdio.h>
int main()
{
	//char grade;浮点 
	int n;//整型 
	scanf("%d",&n);
	printf("You score:");
	switch(n) 
	{
		//printf("You score:");
		case 1:printf("85-100\n");break;
		case 2:printf("7O-84\n");break;
		//case 'C':printf("60-69\n");break;
		//case 'D':printf("85-100\n");break;
		default:printf("error\n");
	}
	return 0;
}
//case适用于开关语句的 关键字，功能：判断表达式的值然后跳转到与表达式相同的值，对应的case执行。
//break 执行一条 case后跳出语句作用/可使程序终止循环 

