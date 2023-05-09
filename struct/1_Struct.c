#include <stdio.h>


char * readUserName(void)
{
    char name[30];
    printf("what is your name? ");
    gets(name);
    return name;
}



int main(void)
{
    char * name1;
    char * name2;
    name1 = readUserName();
    printf("name1: %s \n");




    return 0;
}