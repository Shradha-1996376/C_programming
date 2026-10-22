/*
Assignment 3
Q4 Accept one charcter from user and convert case of that character. 
*/

#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL chkVowel (char cvalue)
{
    
    if(cvalue == 'a'|| cvalue == 'e'||cvalue == 'i'|| cvalue =='o'|| cvalue =='u'||
        cvalue == 'A'|| cvalue == 'E'||cvalue == 'I'|| cvalue =='O'|| cvalue =='U' )
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
    char cvalue = '\0';
    BOOL bret = FALSE;
    printf("Enter character\n");
    scanf("%c",& cvalue);
    
    bret = chkVowel(cvalue);
    if(bret == TRUE )
    {
        printf("it is vowel");
    }
    else
    {
        printf("it is not vowel");
    }
        

    return 0;

}