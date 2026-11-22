#include<stdio.h>

int main (){


int marks;
scanf("%d",&marks);

if(marks<100&&marks>90)
{
    printf("A ");

}
else if(marks<=89&&marks>80)
{
    printf("B");

}
else if(marks<=79&&marks>70)
{
    printf("C");
}

else if(marks<=69&&marks>60)
{
    printf("D");
}










    return 0;
}