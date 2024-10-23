// file handling in c store data in our local storage which can be used at any time becuase as the execution of a programme complates our data is lost.therefore we need to save our data mdata in any file form  --> text or binary files ...

 

#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("demo.txt","r");
    char store[100];
}