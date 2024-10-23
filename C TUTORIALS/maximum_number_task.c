// #include<stdio.h>
// int main()
// {
//     int a,b;
//     printf("Enter Your First number :");
//     scanf("%d",&a);
//     printf("Enter Your Second number :");
//     scanf("%d",&b);
//     if(a<b)
//     {
//         printf("%d is maximum number",b);
//     }
//     else{
//         printf("%d is maximum number",a);
//     }
// }

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter First Number :");
    scanf("%d",&a);
    printf("Enter Second Number :");
    scanf("%d",&b);
    printf("Enter Second Number :");
    scanf("%d",&c);
    if(a<b && c<b)
    {
        printf("%d is maximum number",b);

    }
    else if(a<c && b<c)
    {
        printf("%d is maximum number",c);

    }
    else{
        printf("%d is maximum number",a);
    }
    
    


}