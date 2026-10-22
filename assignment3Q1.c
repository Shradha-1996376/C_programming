/*
Assignment 3
Q1 Write a program which accept one number from user and print that number of even number on screen
*/

#include<stdio.h>

void PrintEven(int ino)
{
    int ieven = 0;
    if(ino <= 0)
    {
        ieven = ino % 2;
        return ;
    }
    for(ieven = 1; ieven <= ino; ieven++)
    {
        printf("%d\n", 2* ieven);
    }

}
int main()
{
    int ivalue = 0;
    printf("Enter number\n");
    scanf("%d",&ivalue);

    PrintEven(ivalue);
    return 0;

}