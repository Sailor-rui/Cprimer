#include <stdio.h>
int main()
{
	//char grade;���� 
	int n;//���� 
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
//case�����ڿ������� �ؼ��֣����ܣ��жϱ��ʽ��ֵȻ����ת������ʽ��ͬ��ֵ����Ӧ��caseִ�С�
//break ִ��һ�� case�������������/��ʹ������ֹѭ�� 

