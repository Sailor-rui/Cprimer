#include<stdio.h>
int main()
{
    long inNumber;
    float bonus,bonFir,bonSec,bonFou,bonSix,bonTen;
    int coNumber;
    bonFir=10000*0.1;
    bonSec=bonFir+100000*0.075;
    bonFou=bonSec+200000*0.05;
    bonSec=bonFou+200000*0.03;
    bonTen=bonSix+400000*0.015;
    printf("请输入利润inNumber:");
    scanf("%ld",&inNumber);
    coNumber=inNumber/100000;
    if(coNumber>10) coNumber=10;
    switch(coNumber)
    {
    case 0:bonus=1*0.1;break;
    case 1:bonus=bonFir+(inNumber-100000)*0.075;break;
    case 2:
    case 3:bonus=bonSec+(inNumber-200000)*0.05;break;
    case 4:
    case 5:bonus=bonFou+(inNumber-400000)*0.03;break;
    case 6:
    case 7:
    case 8:
    case 9:bonus=bonSix+(inNumber-600000)*0.015;break;
    case 10:bonus=bonTen+(inNumber-1000000)*0.01;break;
    }
    printf("奖金是%10.2f",bonus); 
    return  0;
}

