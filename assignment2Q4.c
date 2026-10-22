/*
Assignment 2
Q4 Accept two number form user and display first number in scecond number of time
*/

#include<stdio.h>

void Display(int ino, int ifrequency)
{
    int icnt = 0;
    for(icnt = 1; icnt <= ifrequency ; icnt++)
    {
        printf("%d\n",ino);

    }
    
}
int main()
{
    int ivalue = 0;
    int icount = 0;
    printf("Enter number");
    scanf("%d\n",&ivalue);

    printf("Enter frequency");
    scanf("%d\n",&icount);

    Display(ivalue,icount);
    return 0;

}