#include "Mystring.h"
void absolute(int *ap)
{
    if (*ap < 0) *ap = -*ap;
}

char *longsum(char *num1, char *num2,char product[100])
{
    int carry = 0, idx=0, *r = num1, *d = num2;
    char temp;
    Mystrreverse(num1);
    Mystrreverse(num2);
    while (*num1 != '\0' || *num2 != '\0')
    {
        if (*num1 == '\0')
            temp = *num2++ + carry;
        else if (*num2 == '\0')
            temp = *num1++ + carry;
        else
            temp = *num1++ + *num2++ + carry - '0';

        if (temp > 57)
        {
            carry = 1;
            product[idx++] = temp - 10;
        }
        else
        {
            carry = 0;
            product[idx++] = temp;
        }
    }
    if (carry == 1) 
        product[idx++] = '1';
    product[idx] = '\0';
    Mystrreverse(product);
    Mystrreverse(r);
    Mystrreverse(d);
    return product;
}

// char *longsubtract(char *num1, char *num2,char product[100])
// {
//     int carry = 0, idx=0, *r = num1, *d = num2;
//     char temp;
//     Mystrreverse(num1);
//     Mystrreverse(num2);
//     while (*num1 != '\0' || *num2 != '\0')
//     {
//         if (*num1 == '\0')
//             temp = *num2++ - carry;
//         else if (*num2 == '\0')
//             temp = *num1++ - carry;
//         else
//             temp = *num1++ - *num2++ - carry + '0';

//         if (temp > 57)
//         {
//             carry = 1;
//             product[idx++] = temp - 10;
//         }
//         else
//         {
//             carry = 0;
//             product[idx++] = temp;
//         }
//     }
//     if (carry == 1) 
//         product[idx++] = '1';
//     product[idx] = '\0';
//     Mystrreverse(product);
//     Mystrreverse(r);
//     Mystrreverse(d);
//     return product;
// }


