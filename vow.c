#include <stdio.h>

int main()
{
    char alp;
    printf("enter alp");
    scanf("%c",&alp);
    if((alp=='a')||(alp=='e')||(alp=='i')||(alp=='o')||(alp=='u'))
    {
        printf("vowel");
    }
    else
    {
        printf("consonant");
    }

    return 0;
}
