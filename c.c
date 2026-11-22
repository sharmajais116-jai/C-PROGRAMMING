#include<stdio.h>

int main(){


    int a,b,c;
printf("Enter the value of a");
scanf("%d",&a);
printf("Enter the value of b");
scanf("%d",&b);




printf("Enter the value of c");
scanf("%d",&c);

if (a>=b&&b>=c)
{
    printf("A is greater%d",a);
}
 else if (b>=a&&b>=c)
 {
    printf("B is gretar");

 }
 else{

    printf("C is gretar%d",c);
 }
return 0;

}