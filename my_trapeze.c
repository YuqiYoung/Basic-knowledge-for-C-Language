#include <stdio.h>
#include <assert.h>
#include <math.h>
double exp_x(double x)
{
    return exp(-1*x);
}

double exp_x_square(double x)
{
    return exp(-1*x*x);
}

double cal_h(int a, int b, int N)
{
    return 1.0*(b-a)/N;
}

double trapeze(int a,int b,int N, double (*func)(double x))
{
    double dbH=cal_h(a,b,N);
    double dbFirstPart=dbH/2*((*func)(a)+(*func)(b));
    double dbSecondPart=0.0;
    
    for (int i=1; i<=N-1; i++) {
        dbSecondPart=dbSecondPart+(*func)(a+i*dbH);
    }
    dbSecondPart=dbH*dbSecondPart;
    
    return (dbFirstPart+dbSecondPart);
    
}

int main()
{
    int a=0;
    int b=1;
    int N;
    assert((b-a)>0);
    
    printf("Enter the number of intervals: ");
    int input=scanf("%d",&N);
    assert(1==input);
    
    double dbR1=trapeze(a,b,N,exp_x);
    double dbR2=trapeze(a,b,N,exp_x_square);
    printf("integral of exp(-x*x): %lf\n",dbR2);
    printf("integral of exp(-x):   %lf\n",dbR1);
    
    return 0;
}