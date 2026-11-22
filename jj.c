#include<stdio.h>


int main (){

int Username,passward;
printf("Enter the value of username");
scanf("%d",&Username);
printf("Enter your passward");
scanf("%d",&passward);

if (Username==78180&&passward==82734)
{
    printf("Login successfull");

}
else{
    printf("Invaild username and passward");

}

    return 0;
}