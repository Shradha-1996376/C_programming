/*
Assignment 3
Q2 Write a program which accept one number from user and print that number of even factor of that number
*/

#include<stdio.h>

void DisplayFactor (int ino)
{
    int i = 0;
    if(ino <  0)
    {
        ino = -ino;
        return ;
    }
    for(i = 1; i < ino; i++)
    {
        if(ino % i == 0)
        {
        printf("%d\t ",i);
        }
    }

}
int main()
{
    int ivalue = 0;
    printf("Enter number\n");
    scanf("%d",&ivalue);

    DisplayFactor(ivalue);
    return 0;

}