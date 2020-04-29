#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	while (getchar() != '\n')//当读入的不是空格的时候
	{
		continue;
	}
	int i = 1, j = 1;
	while (i <= n)
	{
		j = 1;
		while (j <= i)
		{
			printf("%d*%d=%d", j, i, j * i);
			printf("   ");
			j++;
		}
		printf("\n");
		i ++;
	}
	getchar();//暂停窗户 
	return 0;
}

