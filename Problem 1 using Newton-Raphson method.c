#include<stdio.h>
#include<math.h>
main()
{
    float a,b,c,x,n,d,e;
    printf("Enter the initial value Xo= ");
    scanf("%f",&x);
    printf(" n      Xn       f(Xn)    f'(Xn)     Root\n");

    A:
    d=(x*x)-(4*x)-10;
    e=((2*x)-4);
    a=x;
    x=(x-(d/e));
    b=x;
    printf(" %.f   %.4f   %.4f   %.4f   %.4f \n",n,a,d,e,b);
    c=fabs(b-a);
    n++;
    if(c<0.0001)
        {
           printf("\nThe Root is %.4f\n\n",x);
           exit(0);
        }
    goto A;
}
