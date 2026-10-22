/*
Assignment 2
Q1 Accept one number form user and print that number of * on screen
*/

#include<stdio.h>

void Display(int ino)
{
    int icnt = 0;

    while( icnt < ino)
    {
        printf("*\n");

        icnt++;
    }
}
int main()
{
    int ivalue = 0;
    printf("Enter number");
    scanf("%d\n",&ivalue);

    Display(ivalue);
    return 0;

}