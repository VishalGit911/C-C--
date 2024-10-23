#include<stdio.h>
int  main()
{
    int marks_1,marks_2,marks_3,marks_4,marks_5;
    float total_marks;
    printf("enter student marks :");
    scanf("%d %d %d %d %d",&marks_1,&marks_2,&marks_3,&marks_4,&marks_5);
    total_marks =  (marks_1 + marks_2 + marks_3 + marks_4 + marks_5)/5;
    printf("student total mark is %.2f",total_marks);
}