#include <stdio.h>
void test()
{
    /*const int nValue； //nValue is const
    const char *pContent; // *pContent is const, pContent can be changed
    const (char *) pContent;//pContent is const, *pContent can be changed
    char* const pContent; //pContent is const, *pContent can be changed
    const char* const pContent; //both of pContent and *pContent are const
    
    int const nValue； // nValue is const
    char const * pContent;// *pContent is const, pContent can be changed
    (char *) const pContent;//pContent is const, *pContent can be changed
    char* const pContent;// pContent is const, *pContent can be changed
    char const* const pContent;//both of pContent and *pContent are const*/

}

int main()
{
    
    typedef char* pStr;
    char string[4] = "abc";
    const char *p1 = string;
    const pStr p2 = string;
    printf("%c\n",*p1);
    *p1="g";
    p1++;
    printf("%c\n",*p1);
    printf("%p\n",p1);
    *p1="g";
    
    //*p2='g';
    
    //p2++;
    
    return 0;
}