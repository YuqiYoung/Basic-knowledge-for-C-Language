#include <stdio.h>
int sum(int num,int *a)
{
  if(num==1)
  {
      return a[0];
  }
  else
  {
      return sum(num-1,a)+a[num-1];
  }

}

int main(void)
{
    int a[]={1,2,3,4,5};
    printf("%d\n",sum(5,a));
  return 0;
  
}




