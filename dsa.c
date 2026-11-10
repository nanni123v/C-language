#include<stdio.h>
#include<conio.h>
#include<math.h>
struct term{
    int coeff;
    int power;
};
int main()
{
    struct term poly[4];
    printf("enter the value of poly:");
    for(i=0;i<n;i++)
    {
        printf("enter the coeff of term [%d]=",i);
        scanf("%d",&poly[i].coeff);
        printf("enter the power the term [%d] =",i);
        scanf("%d",&poly[i].pow);

    }
    getch();
    return 0;
}
