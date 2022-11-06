#include <stdio.h>
int main()
{   
    float R, A;
    printf("enter the radius of the cricle\n");
    
    scanf("%f",&R);
    A=3.14*R*R;
    printf("Area of cricle is %f and it's radius is %f : ", A, R);
    return 0;
}