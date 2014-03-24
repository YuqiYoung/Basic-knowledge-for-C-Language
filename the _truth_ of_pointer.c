#include <stdio.h>



int main(void)

{
    
    char* str = "ABCDEFGHIJKL";
    
    int* pInt = (int*)str;
    printf("%p\n",pInt);
    printf("%p\n",pInt+1);
    printf("%p\n",str);
    printf("%p\n",str+1);
    printf("%lu\n",sizeof(int*));
    printf("%lu\n",sizeof(int));
    printf("%lu\n",sizeof(char));
    printf("%lu\n",sizeof(char*));
    
    printf("%c\n%c\n",*(str+1),*(char *)(pInt+1));
    
    /*int i=7;
    double x=0.5;
    double y=3.5;
    
    printf("%lf", i*x/(int)y);*/
    
    return 0;
    
}