#include<stdio.h>
int main()
{

    int a,b;
    printf("enter the value of a :");
    scanf("%d",&a);
    printf("enter the value of b :");
    scanf("%d",&b);
    printf("the sum of two number is %d\n",a+b);
    printf("the substraction of two number is  %d\n",a-b);
    printf("the mulplication of two number is  %d\n",a*b);
    printf("the division of two number is  %d\n",a/b);
    printf("the modulo of two number is %d\n",a%b);
    
// operator in c
 /*
    arrithmatic  operator 
    assigment    operator
    relaional    operator 
    biwise       operator
    logical      operator
    special      operator
 */
    // ++ increament or decrement --
   
           // prefix  ++a  or post  a++
         //pree fix a++ or post  a--
    printf("the number of prefix is %d\n",++a); // 31
    printf("the number of postfix is %d\n",a++); // 32 but it 32print in next one 


    // decrement    

    printf("the number of prefix is %d\n",--a); // 31
    printf("the number of postfix is %d\n",a--); // 30
    printf("%d",a);

}