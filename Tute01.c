/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2;
  float average;
  
  printf("Enter your subject 1 marks: ");
  scanf("%d",&mark1);

  printf("Enter your subject 2 marks: ");
  scanf("%d",&mark2);

  average = (mark1+mark2)/2;

  printf("\nYour average is  %.2f",average);
  
  return 0;
}

