#include <stdio.h>
void one()
{
    printf("11111\n");
    //return 0;
}
int two(int one)
{
    //one();
    printf("%d\n",one);
    return 0;
}



void swap_without_pointer(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("after run swap_without_pointer() a=%d b=%d\n",a,b);
}

void swap_without_pointer_1(int b,int a)
{
    int temp;
    temp=b;
    b=a;
    a=temp;
    printf("after run swap_without_pointer() a=%d b=%d\n",a,b);
}

void swap_with_pointer(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}



int main()
{
    int a=1,b=3;
    swap_without_pointer_1(a,b);
    printf("a=%d b=%d\n",a,b);
    
    swap_with_pointer(&a,&b);
    printf("a=%d b=%d\n",a,b);
    
    //two(1);
    return 0;
}