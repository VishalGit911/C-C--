/*

comments

 1. single line
 2. multi-line

 //

Datatypes.

  1. primary data-types

  integer    -  without decimal point - (punranak , natural) -32768 to +32767
  floating-point  - decimal point - (apurnak) 3.14 , 99.93
  double - decimal point - 2.398568455
  character - single charcter (simple , special )

  A to Z  , a to z ,
  # @ % ^ & * ! ( ) { }


   integer - int   - 00
  floating-point  float  - 4 byte
  double - double   - 8 byte
  charcter - char - 1 byte

  variable

  - one kind of containert which is store any kind of value in meomoryu.

  three step

  1. variable declaration

   datatype varible_name;
   int cllg_marks;

   2. intilization

  float pi;
   pi = 3.14;

   3. variable decration with intilization

   char myName_letter = '@';


   formate specifiers.

   int - %d
   float - %f
   double - %lf
   char - %c

   ------------------------------


   long
   signed
   unsigend


*/

#include <stdio.h>

int main()
{

  printf("This is Important lecture for datatypes and variables.\n");

  unsigned int first = 1424;
  float pi = 3.14;
  double point = 63.5698856;
  char name = 'N';

  printf("The value of first is %02d\n", first);
  // printf("The value of pi is %.4f\n",pi);
  // printf("The value of point is %lf\n",point);
  // printf("The value of name is %c\n",name);

  //  printf("The value of first is %d\nThe value of pi is %.4f\nThe value of point is %lf\nThe value of name is %c\n",first,pi,point,name);
}