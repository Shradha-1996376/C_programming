/*
Assignment 2
Q2 Accept one number form user and print that number of * on screen
*/

#include<stdio.h>

void Display(int ino)
{
    

    while( 0 < ino)
    {
        printf("*\n");

        ino--;
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