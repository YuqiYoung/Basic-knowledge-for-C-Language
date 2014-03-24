#include <stdio.h>
#include <assert.h>
#include<math.h>

void test_fscanf_1()
{
    int a=2;
    assert(a==2);
    for(int i=0,j=0;i<3&&j>-1;i++,j++)
    {
        printf("%lf",pow(2,-0.5));
    }
    /*int data[5];
    char *filename="/Users/mac/scores.txt";
    FILE *fp= fopen(filename,"r");
    fscanf(fp,"%d",&data[0]);
    fclose(fp);*/
}

void test_fscanf()
{
    int data;
    char *filename="/Users/mac/scores";
    FILE *fp= fopen(filename,"r");
    if (fp!= NULL) {
        fscanf(fp,"%d",&data);
        fscanf(fp,"%d",&data);
        printf("test_fscanf(): %d\n",data);
    }
    else
    {
        printf("doesn't find file %s\n",filename);
    }
    
    fclose(fp);
}

void test_fscanf_while()
{
    FILE *fp= fopen("/Users/mac/scores","r");
    
    int data,status;
    int count90=0;
    status= fscanf(fp,"%d",&data);
    
    while(status!=EOF)
    {
        if(data==90)
        {
            count90=count90+1;
        }
        status= fscanf(fp,"%d",&data);
    }
    fclose(fp);
    printf("test_fscanf_while(): count90= %d\n",count90);

}

void test_fscanf_do_while()
{
    FILE *fp= fopen("/Users/mac/scores","r");
    
    int data,status;
    int count90=0;
    
    do
    {
        status= fscanf(fp,"%d",&data);
        if(status!=EOF)
        {
            if(data==90)
            {
                count90=count90+1;
            }

        }
    }while(status!=EOF);
    
    fclose(fp);
    printf("test_fscanf_do_while(): count90= %d\n",count90);
    
}

void test_Scanf()
{
    int data,status;
    int count90=0;
    
    status=scanf("%d",&data);
    while(status!=EOF)
    {
        if(data==90)
        {
            count90=count90+1;
        }
        status=scanf("%d",&data);
    }
    printf("test_Scanf(): count90= %d\n",count90);
}

int main()
{
    test_fscanf_1();
    //test_fscanf_do_while();
    //test_fscanf_while();
    //test_Scanf();

    return 0;
}