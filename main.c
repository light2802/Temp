#include <stdio.h>
#include <stdlib.h>

#include "add.h"

int main(int argc, char **argv)
{
    long int a=0, b=0;
    if(argc>0)  a=strtol(argv[1], NULL, 10);
    if(argc>1)  b=strtol(argv[2], NULL, 10);

    printf("%Ld+%Ld=%Ld\n", a, b, add(a,b));
}
