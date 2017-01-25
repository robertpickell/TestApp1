// This is a test for file number 2

#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("The following arguments were passed to main():\n");
    printf("argnum \t value \n");
    for (int i = 0; i<argc; i++) printf("%d \t %s \n", i, argv[i]);
    printf("\n");

    return 0;
} 
