#include<stdio.h>

int main (){

int P;
printf("Enter Your perentage");
scanf("%d",&P);


if (P>=90)
{
    printf("Yor grade is A");
}
else if (P>=80)
{
    printf("Your graade is B");

}
else if(P>=70)
{
    printf("Your grade is C");

}
else if (P>=60)
{
  printf("Your grade is D");

}
else{
    printf("You are fail");

}
return 0;
}