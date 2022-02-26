#include <stdio.h>
#include <stdlib.h>

int main()
{
   int grades[10]; //ARRAY STORING 10 VALUES
   int count = 10; //NUMBER OF VALUES TO BE READ
   long sum = 0;   //SUM OF THE NUMBERS
   float avarage = 0.0F; //AVARAGE OF THE NUMBERS


   //prompt for the input

   printf("\nEnter the 10 grades:\n");

   //Read the 10 numbers, to be avaraged:

   for(int i = 0; i < count; ++i){
    printf("%d> ", i+1);
    scanf("%d", &grades[i]); //READ A GRADE
    sum+= grades[i];         //ADD IT TO SUM
   }

   //AVARAGE
avarage = (float) sum/count;
printf("\nAvarage of the ten grades entered is: %2f\n", avarage);

    return 0;
}
