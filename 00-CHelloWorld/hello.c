#include <stdio.h>

int main()
{
    printf("Hello, world!");

    FILE* fOutput = fopen("output.txt","w");
    fprintf(fOutput,"Hello, world!");

    return 0;
}


