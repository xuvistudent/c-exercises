#include <stdio.h>

/* CONVERSION FROM F TO C */
float f_to_c_conversion(float tempIn)
{
    return (tempIn - 32.0) / (9.0 / 5);
}

/* CONVERSION FROM C TO F */
float c_to_f_conversion(float tempIn)
{
    return (tempIn * (9.0 / 5)) + 32.00;
}

int main()
{
    float tempIn;
    float tempOut;
    short option;
    printf("Choose conversion: \n1. F to C\n2. C to F\nYour option: ");
    scanf("%d", &option);
    switch(option)
    {
    case 1:
        {
            printf("Temp in F: ");
            scanf("%f", &tempIn);
            tempOut = f_to_c_conversion(tempIn);
            printf("Temp in C after conversion: %.2f", tempOut);
            break;
        }
    case 2:
        {
            printf("Temp in C: ");
            scanf("%f", &tempIn);
            tempOut = c_to_f_conversion(tempIn);
            printf("Temp in F after conversion: %.2f", tempOut);
            break;
        }
    default:
        return 0;
    }
    return 0;
}


