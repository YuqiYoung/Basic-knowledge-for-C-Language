#include <stdio.h>

int main(int argc, char* argv[])
{
    printf("argc = %d\n",argc);
    for(int i;i<argc;i++)
    {
        printf("argv[%d] = %s\n",i,argv[i]);
    }
    for(int i;i<argc+5;i++)
    {
        printf("argv[%d] = %s\n",i,argv[i]);
    }
    return 0;
}