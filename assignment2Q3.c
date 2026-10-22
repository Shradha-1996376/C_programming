/*
Assignment 2
Q3 Accept on number form user if number is less than 10 then print Hello otherwise print Demo
*/

#include<stdio.h>

void Display(int ino)
{
    if(ino < 10)
    {
        printf("Hello\n");

    }
    else
    {
        printf("Demo\n");
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