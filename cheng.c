#include <stdio.h>  
int main() 
{
   int n;
   int x1=0,x2=0,x3=0,x4=0,x5=0;
   printf("请输入学生的成绩1~100:\n");
   scanf("%d",&n);
   while(n!=-1)
   {
        if(1<=n&&n<=59)
  {
     x1+=1;
  }
  else if(60<=n&&n<=69)
  {
     x2+=1;
  }
  else if(70<=n&&n<=79)
  {
     x3+=1;
  }
  else if(80<=n&&n<=89)
  {
     x4+=1;
  }
  else
  {
     x5=+1;
  }
  scanf("%d",&n);
   }
   printf("1~59分数段的人数为:%d\n",x1);
   printf("60~69分数段的人数为:%d\n",x2);
   printf("70~79分数段的人数为:%d\n",x3);
   printf("80~89分数段的人数为:%d\n",x4);
   printf("90~100分数段的人数为:%d\n",x5);
   return 0;
}
