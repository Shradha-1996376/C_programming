/*
Assignment 2
Q5 Accept two number form user and check whether number is even or odd
*/

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckEven(int ino)
{
    if((ino % 2)== 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}

int main()
{
    int ivalue = 0;
    BOOL bret = FALSE;

    printf("Enter number");
    scanf("%d\n",&ivalue);

    bret = CheckEven(ivalue);

    if(bret == TRUE)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n ");

    }
     

    return 0;
}
