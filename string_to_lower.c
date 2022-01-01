#include <string.h>
#include <ctype.h>
#include <stdio.h>
char *tolowercase(char *text,char *after);

int main(void){
char *text = "HELLO WORLD";
char after[strlen(text)];
}

char *tolowercase(char *text,char *after)
{
    for(int i = 0; i < strlen(text); i++)
    {

        after[i] = tolower(text[i]);
    }

    return after;
}