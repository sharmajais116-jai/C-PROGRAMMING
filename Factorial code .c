#include<stdio.h>
int main (){

int num,fact=1,i;
scanf("%d",&num);
for(i=num;i>=1;i--){

fact=fact*i;

printf("%d",i);

if(i>1){

    printf("*");
}
}


printf("=%d",fact);








    return 0;
}