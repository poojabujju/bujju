#include <stdio.h>
main ()
{
    char opt;
    do
        {
            printf("Enter q to quit: ");
            opt = getchar ();
        }
    while (opt != 'q');
}
