#include <stdio.h>
int main()
{
    printf("************************************** For Centimeter to Inches press = 1 **************************************\n");
    printf("**************************************  For Kilometer to Miles press = 2  **************************************\n");
    printf("**************************************   For Pound to Kilogram press = 3  **************************************\n");
    printf("**************************************    For Inches to Foot press = 4    **************************************\n");
    printf("**************************************    For Inches to Meter press = 5   **************************************\n");
    int c;
    printf("########### Enter number of Your Choice from 1 to 5 ###########\n");
    scanf("%d", &c);
    if (c ==  1)
    {
        float a;
        float b;
        float c;
        b = 0.393701;
        printf("Enter your number to Calculate = ");
        scanf("%f", &a);
        c = a * b;
        printf("%f Centimeter is %f inches", a ,c);
    }
    else if (c == 2)
    {
        float a;
        float b;
        float c;
        b = 0.621371;
        printf("Enter your number to Calculate = ");
        scanf("%f", &a);
        c = a * b;
        printf("%f Kilometer is %f Mile", a ,c);
     }
     else if (c == 3)
    {
        float a;
        float b;
        float c;
        b = 0.453592;
        printf("Enter your number to Calculate = ");
        scanf("%f", &a);
        c = a * b;
        printf("%f Pound is %f Kilogram", a ,c);
     }
     else if (c == 4)
    {
        float a;
        float b;
        float c;
        b = 0.0254;
        printf("Enter your number to Calculate = ");
        scanf("%f", &a);
        c = a * b;
        printf("%f Inches is %f Meter", a ,c);
     }
     else if (c == 5)
    {
        float a;
        float b;
        float c;
        b = 0.833333;
        printf("Enter your number to Calculate = ");
        scanf("%f", &a);
        c = a * b;
        printf("%f Inches is %f Foot", a ,c);
     }
     else
     {
         printf("you typed wrong! try again");
     }
     
    return 0;
}