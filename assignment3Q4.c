/*
Assignment 3
Q4 Accept one charcter from user and convert case of that character. 
*/

#include<stdio.h>
#include<ctype.h>

void DisplayConvert (char cvalue)
{
    
    if(cvalue >= 'a' && cvalue <= 'z' )
    {
        printf("%c\n", cvalue -32);
    }
    else if (cvalue >= 'A' && cvalue <= 'Z' )
    {
        printf("%c\n",cvalue + 32);
    }
    else
    {
        printf("not a character %c\n",cvalue);
    }
    


}
int main()
{
    char cvalue = '\0';
    printf("Enter character\n");
    scanf("%c",& cvalue);

        DisplayConvert(cvalue);

    return 0;

}