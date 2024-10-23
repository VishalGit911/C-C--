//  swpping with two variaable

 #include<stdio.h>
 int main()
 {
     int a = 10 , b = 20;
     printf("before swapping  a = %d and b = %d\n",a,b);

    a = a + b;
    b = a - b;
    a = a - b;                                
     printf("after swapping a = %d  and b = %d",a,b);
 }

//  swape value by using third variable...

// #include<stdio.h>
// int main()
// {
//     int a = 30 , b = 20 , temp;
//    printf("before the swapping values a = %d and b = %d\n", a,b);
//    temp = a;
//    a = b;
//    b = temp;
//    printf("after the swapping values a = %d and b = %d",a,b);

// }