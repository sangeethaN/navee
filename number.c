#include <stdio.h>

int main()
{
    int number;
    scanf("%d",&number);
    if(number>0)
    printf("\npositive number");
    if(number<0)
    printf("\nnegative number");
    if(number==0)
    printf("\nzero");
    return 0;
}
