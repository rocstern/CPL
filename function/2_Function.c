#include <stdio.h>

void showAllString(int argc, char * argv[])
{
    for (int i = 0; i < argc; i++)
    {
        printf("%s \n", argv[i]);
    }
}



int main(void)
{
    char * str[3] = {
            "C Programming",
            "C++ Programming",
            "JAVA Programming"
    };

    showAllString(3, str);











    return 0;
}