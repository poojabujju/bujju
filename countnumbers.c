  #include <stdio.h>
  void main()
  {
      char s[80];
      int count, nc = 0, s = 0;
   
      printf("Enter the s containing both digits and alphabet \n");
      scanf("%s", s);
      for (count = 0; s[count] != '\0'; count++)
      {
          if ((s[count] >= '0') && (s[count] <= '9'))
          {
              nc += 1;
              s += (s[count] - '0');
          }
      }
      printf("NO. of Digits in the s = %d\n", nc);
      printf("S of all digits = %d\n", s);
  }

