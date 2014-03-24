#include <stdio.h>
#include <string.h>
void diff_chars_string()
{
    char *s="abdcf";
    char t1[2]={"a"};
    char t2[1]={'a'};
    char array[5];
    for(int i=0;i<4;i++)
    {
        array[i]='0'+i;
    }
    array[4]='\0';
    
    char array2[5];
    for(int i=0;i<5;i++)
    {
        array2[i]='a';
    }
    
    printf("s= %s\n",s);
    printf("t1= %s\n",t1);
    printf("%c\n",t1[1]);
    printf("t2= %s\n",t2);
    printf("t2= %c\n",t2[0]);
    printf("array= %s\n",array);
    printf("array2= %s\n",array2);
}

void testStringMethod()
{
    char array[100]="abcdefg";
    char array2[]="abcp";
    char *temp="abcdefg";
    char temp2[10]="012345678";
    temp2[9]='\0';
    /*printf("%d\n",strncmp(array, array2,1));
    printf("%d\n",strncmp(array, array2,2));
    printf("%d\n",strncmp(array, array2,3));
    printf("%d\n",strncmp(array, array2,4));
    printf("=============\n");
    printf("%d\n",strcmp(array, array2));
    printf("%d\n",strcmp(array2, array));
    printf("%d\n",strcmp(array, array));
    printf("%d\n",strcmp(&temp[2], &temp[1]));*/
    printf("=============\n");
    printf("%s\n",strcat(array, array2));
    printf("%s\n",strncat(array, array2,2));
    /*printf("=============\n");
    printf("%lu\n",strlen(array+2));
    printf("%lu\n",strlen(temp+2));
    printf("%lu\n",strlen(temp));
    printf("%lu\n",strlen(array));*/
    /*printf("=============\n");
    printf("%s\n",temp2);
    strncpy(temp2,&temp[2],1);
    printf("%s\n",temp2);
    //strcpy(temp2,&temp[2]);
    strcpy(temp,temp2);
    printf("%s\n",temp2);*/

}
void testStrtok()
{
    char source[100]="1234_qwer_asdf_zxcv";
    //char *source="1234_qwer_asdf_zxcv";
    //source[1]='1';
    //printf("%s\n",source);
    //*source='p';
    char *token;
    token=strtok(source,"_");
    while(token!=NULL)
    {
        printf("%s\n",token);
        token=strtok(NULL,"_");
        
    }
}
int main()
{
    testStringMethod();
    //testStrtok();
    //diff_chars_string();
    return 0;

}