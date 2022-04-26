#include <stdio.h>

int main()
{
    
    int s,k,d; float f=7.2564;
    char c='b'; 
    int a;
    long b;
    double e;
    unsigned int m;
    long double g;
    short x;
    s=3;
    k=4;
    d=s+k;
    x=9;
    printf("the int =%d\n",d);
    printf("the float=%f\n",f);
    printf("the character value is %c",c);
    printf("the size of the short byte=%ld",sizeof (x));
    printf("size of int=%ld bytes\n",sizeof (a));
    printf("size of the long=%ld bytes\n",sizeof (b));
    printf("size of double int=%ld bytes\n",sizeof (e));
    printf("size of long double int=%ld bytes\n",sizeof (g)); 
    return 0;
}
