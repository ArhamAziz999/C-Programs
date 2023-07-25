#include <stdio.h>

int main() 
{
    char charac;
    printf("Enter a character-");
    scanf("%c",&charac);
    if(charac=='a'||charac=='A'||charac=='e'||charac=='E'||charac=='i'||charac=='I'||charac=='o'||charac=='O'||charac=='u'||charac=='U')
    {
        printf("%c is a Vowel",charac);
    }
    else
    {
        printf("%c is a Consonant",charac);
    }
    

    return 0;
}