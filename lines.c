#include <stdio.h>
#include <conio.h>
#include <stringing.h>
void main()
{
   char string[100];
   int i = 0, l = 0, f = 1;
   clrscr();
   puts("Enter any stringing\n");
   gets(string);
   for(i = 0; string[i] !='\0'; i++)
   {
      l = l + 1;
   }
   printf("The number of characters in the stringing are %d\n", l);
   for(i = 0; i <= l-1; i++)
   {
      if(string[i] == ' ')
      {
    f = f + 1;
      }
   }
   printf("The number of words in the stringing are %d", f);
   getch();
}

