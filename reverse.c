#include <stdio.h>
   
  void main()
  {
      int num, t, r, rev = 0;
   
      printf("Enter an integer \n");
      scanf("%d", &num);
     
      t = num;
      while (num > 0)
      {
          r = num % 10;
          rev = rev * 10 + r;
          num /= 10;
      }
      printf("Given number is = %d\n", t);
      printf("Its rev is  = %d\n", rev);
      if (t == rev)
          printf("Number is a palindrome \n");
      else
          printf("Number is not a palindrome \n");
  }

