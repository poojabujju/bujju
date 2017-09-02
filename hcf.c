#include <stdio.h>

 

int hcf(int, int);

 

int main()

{

    int a, c, result;

 

    printf("Enter the two numbers to find their HCF: ");

    scanf("%d%d", &a, &c);

    result = hcf(a, c);

    printf("The HCF of %d and %d is %d.\n", a, c, result);

 

    return 0;

}

 

int hcf(int a, int c)

{

    while (a != c)

    {

        if (a > c)

        {

            a = a - c;

        }

        else

        {

            c = c - a;

        }

    }

    return a;

}
