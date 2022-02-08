/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int number1 , number2;
   float sum , avg;
   printf("enter the 1st subject mark=");
   scanf("%d" , &number1);
   printf("enter the 2nd subject mark=");
   scanf("%d" , &number2);
   sum= number1+number2;
   avg=sum/2;
      printf("average= %.1f\n", avg);
  
  return 0;
}

