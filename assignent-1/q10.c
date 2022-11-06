#include <stdio.h>
int main()
{
    int D,M,Y;
    printf("Enter the year HH MM YYYY format\n");
    scanf("%d/%d/%d\n",&D,&M,&Y);
    printf("day- %d, Month- %d, year- %d",D,M,Y);
    return 0;

}