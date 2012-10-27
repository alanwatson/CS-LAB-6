Program Description: GIVEN THE DISTANCES (BETWEEN TWO POINTS) OF THREE LINE SEGMENTS DETERMINE IF THEY CAN CREATE A TRIANGLE AND IF SO WHETHER THAT TRIANGLE CAN BE CLASSIFIED AS EQUILATERAL, ISOSCELES, OR SCALENE. 

#include<stdio.h>
#include<math.h>

void getSidelengths(double*, double*, double*); //INPUTES THE GIVEN SIDE LENGTHS
double calLargestside(double, double, double); //CALCULATES THE LARGEST SIDE LENGTH
double displayTriangle(double, double, double, double); //CALCULATES IF THE SIDES CAN FORM AT TIRANGLE OR NOT
void displayEquilateral(double, double, double, double); //DISPLAYS IF IT IS EQUILATERAL
void displayIsosceles(double, double, double, double); //DISPLAYS IF IT IS ISOSCELES
void displayScalene(double, double, double, double); //DISPLAYS IF IT IS SCALENE

int main()
{
 //VARIABLES
 double side1; //SIDE1 VALUE
 double side2; //SIDE2 VALUE
 double side3; //SIDE3 VALUE
 double big; //LARGEST SIDE VALUE
 double triangle; //DETERMINES IF IT IS A TRIANGLE 

 //EXECUATABLE STATEMENTS
 getSidelengths(&side1, &side2, &side3);

 //CALCULATIONS AND PRINTS
 big = calLargestside(side1, side2, side3);
 triangle = displayTriangle(big, side1, side2, side3);
 displayEquilateral(triangle, side1, side2, side3);
 displayIsosceles(triangle, side1, side2, side3);
 displayScalene(triangle, side1, side2, side3);

 return(0);
}

void getSidelengths(double *side1, double *side2, double *side3)
{
 //EXECUATABLE STATEMENTS
 printf("Enter side lengths: ");
 scanf("%lf %lf %lf", side1, side2, side3);
}

double calLargestside(double side1, double side2, double side3)
{
 //VARIABLES
 double big;

 //EXECUATABLE STATEMENTS
 if((side1 > side2) && (side1 > side3))
 {
   big = side1;
 }
 else if ((side2 > side1) && (side2 > side3))
 {
   big = side2;
 }
 else
 {
   big = side3;
 }

 return(big);
}

double displayTriangle(double big, double side1, double side2, double side3)
{
 //VARIABLES
 double triangle;

 //EXECUATABLE STATEMENTS
 if(((side1 + side2 + side3) - big) > big)
 {
   triangle = 1;
   printf("\nThe distances entered can form a triangle: \n");
 }
 else
 {
   triangle = 0;
   printf("\nThe distances entered cannot form a tirangle.\n");
 }

 return(triangle);
}

void displayEquilateral(double triangle, double side1, double side2, double side3)
{
 //EXECUATABLE STATEMENTS
 if (triangle >= 1)
 {
   if((side1 == side2) && (side1 == side3) && (side2 == side3))
   {
     printf("-- is an equilateral triangle\n");
   }
   else
   {
     printf("-- is not an equilateral triangle\n");
   }
 }
 else
 {
 }
}

void displayIsosceles(double triangle, double side1, double side2, double side3)
{
 //EXECUTABLE STATEMENTS
 if(triangle >= 1)
 {
   if(side1 == side2)
   {
     if (side1 == side2)
     {
       printf("-- is an isosceles triangle\n");
     }
     else
     {
       printf("-- is not an isosceles triangle\n");
     }
   }
   else if (side2 == side3)
   {
     if (side2 == side3)
     {
       printf("-- is an isosceles triangle\n");
     }
     else
     {
       printf("-- is not an isosceles triangle\n");;
     }
   }
   else
   {
     if (side1 == side3)
     {
       printf("-- is an isosceles triangle\n");
     }
     else
     {
       printf("-- is not an isosceles triangle\n");
     }
   }
 }
 else
 {
 }
}

void displayScalene(double triangle, double side1, double side2, double side3)
{
 //EXECUATABLE STATEMENTS
 if (triangle >= 1)
 {
   if ((side1 != side2) && (side1 != side3))
   {
     printf("-- is a scalene triangle\n");
   }
   else
   {
     printf("-- is not a scalene triangle\n");
   }
 }
 else
 {
 }
}
