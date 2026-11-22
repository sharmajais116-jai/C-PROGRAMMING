#include<stdio.h>

int main (){

    int height,weight;
    float BMI;
    printf("ENter thevalue of Height");
    scanf("%d",&height);
    printf("Enter the value of weight");
    scanf("%d",&weight);

    BMI=weight/height*height;
 if (BMI>=25&&BMI<=29.9)
 {
    
   printf("Overweight");
 }
else if(BMI<25&&BMI>=18.5) 
{
    printf("Normal range");
}
else if (BMI<18.5)
{
   printf("Underweight");
}
else{
    printf("Obesity");
}
    return 0;
}