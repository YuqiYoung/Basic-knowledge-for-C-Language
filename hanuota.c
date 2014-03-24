   #include <stdio.h>
void moveone(int num,char *init,char *dest)
{
  printf("move disk %d from %s to %s\n",num,init,dest);
}
void move(int num,char *init,char *temp,char *dest)
{
  if(num==1)
  {
    moveone(num,init,dest);
  }
  else
  {
    move(num-1,init,dest,temp);
    moveone(num,init,dest);
    move(num-1,temp,init,dest);
  }

}

int main(void)
{
  move(3,"A","B","C");
  return 0;
  
}




