/*
Q4 Accept one number and check whether is divisibl by 5 or not.
*/

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int ino)
{
    if((ino % 5)== 0)
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

    bret = Check(ivalue);

    if(bret == TRUE)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n ");

    }
    return 0;
}