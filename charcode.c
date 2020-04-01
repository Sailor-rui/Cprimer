#include <stdio.h> 
int main()
{
	char ch;
	printf("Please enter a character.\n"); 
    scanf("%c",&ch);//请输入字符 
	printf("The code for %c is %d.\n",ch,ch);//ASCII形式值输出字符的十进制形式 
	return 0;
}
