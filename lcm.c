#include <stdio.h>
int main()
{
    int n, n1, mm;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n, &n1);
 mm = (n>n1) ? n : n1;
    while(1)
    {
        if( mm%n==0 && mm%n1==0 )
        {
            printf("The LCM of %d and %d is %d.", n, n1,mm);
            break;
        }
        ++mm;
    }
    return 0;
}
